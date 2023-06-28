/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_100_b2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 16:45:19 by tpotilli          #+#    #+#             */
/*   Updated: 2023/06/28 19:02:57 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_100_swap_manager(t_struct *data, int lit1, int lit2, int chunk)
{
	int			cpt;
	t_list_b	*lb;
	int			len;

	cpt = 0;
	len = ft_len_listb(data);
	lb = data->lb->next;
	ft_printf("lit1 %d, lit2 %d \n", lit1, lit2);
	if (data->la->next->num < 0)
		ft_100_swap_manager_negative(data, lit1, lit2, chunk);
	else if (lit1 != -1 && lit2 != -1)
	{
		ft_take_best_place100(data, chunk);
		ft_printf("je suis dabs b2\n");
		data->la = pb(data);
		return ;
	}
	else if (lit1 == -1)
		ft_100_lit1(lb, data, cpt);
	else if (lit2 == -1)
		ft_100_swap_help(data, len, lb);
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
	ft_printf("cpt %d\n", cpt);
	lb = data->lb->next;
	if (cpt == lb->num && data->la->next->num < cpt)
	{
		data->la = pb(data);
		return ;
	}
	else if (cpt == lb->num && data->la->next->num < cpt)
	{
		data->la = pb(data);
		return ;
	}
	ft_take_best_place102(data, cpt);
	data->la = pb(data);
	return ;
}

void	ft_100_swap_help(t_struct *data, int len, t_list_b *lb)
{
	(void)len;
	ft_make_best_place_alg100(data, lb);
	data->la = pb(data);
	return ;
}

void	ft_make_best_place_alg100(t_struct *data, t_list_b *lb)
{
	int			nb;
	int			len;
	int			i;

	i = 0;
	len = ft_len_listb(data);
	nb = ft_found_big_lb_100(data);
	if (nb < 0)
		nb = ft_found_lower_b(data);
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
