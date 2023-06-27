/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 15:57:40 by tpotilli          #+#    #+#             */
/*   Updated: 2023/06/20 22:05:05 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_struct	*rr(t_struct *data)
{
	ra_rr(data);
	rb_rr(data);
	ft_printf("rr\n");
	return (data);
}

t_list_a	*ra_rr(t_struct *data)
{
	int			i;
	int			recup;
	t_list_a	*tmp;

	i = 1;
	tmp = data->la->next;
	recup = data->la->next->num;
	while (tmp->next)
	{
		i++;
		tmp = tmp->next;
	}
	tmp = data->la;
	data->la = ft_freeata(data, 1);
	data->la = ft_addata(data, recup, i);
	return (data->la);
}

t_list_b	*rb_rr(t_struct *data)
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
	return (data->lb);
}
