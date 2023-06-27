/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 18:34:29 by tpotilli          #+#    #+#             */
/*   Updated: 2023/05/14 16:56:39 by tpotilli         ###   ########.fr       */
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
** take the first element on the top of b and put it in top a
** prend le premier element en haut de b et le met en haut de a
*/

t_list_b	*pa(t_struct *data)
{
	int			tmp;
	t_list_b	*lb;

	lb = data->lb->next;
	tmp = lb->num;
	data->lb = ft_freeatb(data, 1);
	data->la = ft_addata(data, tmp, 1);
	ft_printf("pa\n");
	return (data->lb);
}
