/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addAt.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: landeo <landeo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 18:20:00 by tpotilli          #+#    #+#             */
/*   Updated: 2023/06/07 14:51:03 by landeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list_a	*ft_addata(t_struct *data, int nb, int pos)
{
	t_list_a	*prec;
	t_list_a	*cur;
	int			i;
	t_list_a	*cell;

	cell = ft_createcell_a(nb);
	prec = data->la;
	cur = data->la;
	if (data->la == NULL)
		return (cell);
	if (pos == 0)
	{
		cell->next = data->la;
		return (cell);
	}
	i = 0;
	while (i < pos)
	{
		i++;
		prec = cur;
		cur = cur->next;
	}
	prec->next = cell;
	cell->next = cur;
	return (data->la);
}

t_list_b	*ft_addatb(t_struct *data, int nb, int pos)
{
	t_list_b	*prec;
	t_list_b	*cur;
	int			i;
	t_list_b	*cell;

	cell = ft_createcell_b(nb);
	prec = data->lb;
	cur = data->lb;
	if (data->lb == NULL)
		return (cell);
	if (pos == 0)
	{
		cell->next = data->lb;
		return (cell);
	}
	i = 0;
	while (i < pos)
	{
		i++;
		prec = cur;
		cur = cur->next;
	}
	prec->next = cell;
	cell->next = cur;
	return (data->lb);
}
