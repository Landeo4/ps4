/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 18:29:56 by tpotilli          #+#    #+#             */
/*   Updated: 2023/06/27 21:19:53 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
**	This function takes as parameter: 
**
**	t_list_a the name of the struct
**	t_list_b the name of the second struct
**
**	t_list_ba : name of the list a
**	t_list_bb : name of the list a
** =====================================================
** =====================================================
**
** It will do sa and sb at the same time
*/

t_struct	*ss(t_struct *data)
{
	data->la = sa_ss(data);
	data->lb = sb_ss(data);
	ft_printf("ss\n");
	return (data);
}

t_list_a	*sa_ss(t_struct *data)
{
	t_list_a	*la;
	int			tmp1;
	t_list_a	*first;
	int			tmp2;

	la = data->la->next;
	first = la->next;
	tmp1 = first->num;
	tmp2 = first->next->num;
	if (la && la->next)
	{
		la = ft_freeata(data, 2);
		la = ft_addata(data, tmp1, 2);
		la = ft_freeata(data, 1);
		la = ft_addata(data, tmp2, 1);
	}
	return (la);
}

t_list_b	*sb_ss(t_struct *data)
{
	t_list_b	*lb;
	int			tmp1;
	t_list_b	*first;
	int			tmp2;

	lb = data->lb->next;
	first = lb->next;
	tmp1 = first->num;
	tmp2 = first->next->num;
	if (lb && lb->next)
	{
		lb = ft_freeatb(data, 2);
		lb = ft_addatb(data, tmp1, 2);
		lb = ft_freeatb(data, 1);
		lb = ft_addatb(data, tmp2, 1);
	}
	return (lb);
}
