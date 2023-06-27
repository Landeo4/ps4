/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 19:26:04 by tpotilli@st       #+#    #+#             */
/*   Updated: 2023/06/27 21:19:08 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
**	This function takes as parameter: 
**
**	t_list_a the name of the struct
**
**	t_list_ba : name of the list a
** =====================================================
** =====================================================
**
** It will swap the first and the second number in the list a
*/

t_list_a	*sa(t_list_a *la, t_struct *data)
{
	int			tmp1;
	t_list_a	*first;
	int			tmp2;

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
	ft_printf("sa\n");
	return (la);
}
