/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 19:07:26 by tpotilli          #+#    #+#             */
/*   Updated: 2023/05/14 16:56:44 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
**	This function takes as parameter: 
**
**	t_list_a the name of the struct
**
**	la : name of the list a
** =====================================================
** =====================================================
**
** take the first element on the top of A and put it in top B
** prend le premier element au sommet de a et le met sur b.
*/

t_list_a	*pb(t_struct *data)
{
	int			tmp;
	t_list_a	*la;

	la = data->la->next;
	tmp = la->num;
	data->la = ft_freeata(data, 1);
	data->lb = ft_addatb(data, tmp, 1);
	ft_printf("pb\n");
	return (data->la);
}
