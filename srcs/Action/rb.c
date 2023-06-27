/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 19:47:30 by tpotilli          #+#    #+#             */
/*   Updated: 2023/05/14 16:56:51 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/*
**	This function takes as parameter: 
**
**	t_list_b the name of the struct
**
**	la : name of the list b
** =====================================================
** =====================================================
**
** take the first element on the top of b and put it in top a
** prend le premier element en haut de b et le met en haut de a
**
** Décale d’une position vers le haut tous les élements de la pile a.
** Le premier élément devient le dernier.
*/

t_list_b	*rb(t_struct *data)
{
	int			i;
	int			recup;
	t_list_b	*tmp;

	i = 1;
	tmp = data->lb->next;
	recup = data->lb->next->num;
	while (tmp->next)
	{
		i++;
		tmp = tmp->next;
	}
	tmp = data->lb;
	data->lb = ft_freeatb(data, 1);
	data->lb = ft_addatb(data, recup, i);
	ft_printf("rb\n");
	return (data->lb);
}
