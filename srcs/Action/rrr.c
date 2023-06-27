/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: landeo <landeo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 16:00:20 by tpotilli          #+#    #+#             */
/*   Updated: 2023/06/26 01:40:58 by landeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_struct	*rrr(t_struct *data)
{
	data->la = rra_rr(data);
	data->lb = rrb_rr(data);
	ft_printf("rrr\n");
	return (data);
}

t_list_a	*rra_rr(t_struct *data)
{
	t_list_a	*tmp;
	int			i;
	int			recup;

	tmp = data->la->next;
	i = 1;
	while (tmp->next)
	{
		tmp = tmp->next;
		i++;
	}
	recup = tmp->num;
	tmp = data->la;
	data->la = ft_freeata(data, i);
	data->la = ft_addata(data, recup, 1);
	return (tmp);
}

t_list_b	*rrb_rr(t_struct *data)
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
	return (tmp);
}
