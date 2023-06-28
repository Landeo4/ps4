/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_100_b2negatif.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 11:13:31 by tpotilli          #+#    #+#             */
/*   Updated: 2023/06/28 11:20:50 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_100_swap_help0(t_struct *data, int lit1, int lit2, int chunk)
{
	int			cpt;
	t_list_b	*lb;
	int			len;

	cpt = 0;
	len = ft_len_listb(data);
	lb = data->lb->next;
	ft_printf("lit1 %d, lit2 %d \n", lit1, lit2);
	if (lit1 != -1 && lit2 != -1)
	{
		ft_take_best_place100(data, chunk);
		data->la = pb(data);
		return ;
	}
	else if (lit1 == -1)
		ft_100_lit10(lb, data, cpt);
	else if (lit2 == -1)
		ft_make_best_place_alg100_0(data, data->lb);
}


void	ft_100_lit1(t_list_b *lb, t_struct *data, int cpt)
{
	while (lb->next)
		lb = lb->next;
	cpt = ft_found_lower_b(data);
	if (cpt == lb->num)
	{
		data->la = pb(data);
		return ;
	}
	lb = data->lb->next;
	if (cpt == lb->num && lb->num < 0 && data->la->next->num < cpt)
	{
		data->la = pb(data);
		return ;
	}
	if (cpt == lb->num && data->la->next->num < cpt)
	{
		data->la = pb(data);
		data->lb = sb(data->lb, data);
		return ;
	}
	ft_take_best_place102(data, cpt);
	data->la = pb(data);
	return ;
}

void	ft_make_best_place_alg100_0(t_struct *data, t_list_b *lb)
{
	int			nb;
	int			len;
	int			i;

	i = 0;
	len = ft_len_listb(data);
	nb = ft_found_big_lb_100(data);
	while (lb->num != nb)
	{
		lb = lb->next;
		i++;
	}
	if (i == len)
		return ;
	ft_bp_alg100help(len, i, data, nb);
}

void	ft_bp_alg100help(int len, int i, t_struct *data, int nb)
{
	len = len / 2;
	if (i > len)
	{
		len = len * 2;
		while (len > 0)
		{
			if (data->lb->next->num == nb)
				return ;
			data->lb = rrb(data);
			len++;
		}
	}
	else
	{
		while (len > 0)
		{
			if (data->lb->next->num == nb)
				return ;
			data->lb = rb(data);
			len--;
		}
	}
}
