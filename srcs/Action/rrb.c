/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 13:54:38 by tpotilli          #+#    #+#             */
/*   Updated: 2023/05/14 16:57:01 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
**	This function takes as parameter: 
**
**	t_list_a the name of the struct
**
**	la : name of the list b
** =====================================================
** =====================================================
**
** every element of a will go down
** the first become the last
*/

t_list_b	*rrb(t_struct *data)
{
	t_list_b	*tmp;
	int			i;
	int			recup;

	tmp = data->lb->next;
	i = 1;
	while (tmp->next)
	{
		tmp = tmp->next;
		i++;
	}
	recup = tmp->num;
	tmp = data->lb;
	data->lb = ft_freeatb(data, i);
	ft_addatb(data, recup, 1);
	ft_printf("rrb\n");
	return (tmp);
}
