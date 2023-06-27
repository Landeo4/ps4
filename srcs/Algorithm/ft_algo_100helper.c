/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_100helper.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 19:18:57 by tpotilli          #+#    #+#             */
/*   Updated: 2023/06/27 21:18:21 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_take_first_second_algo100(t_struct *data, int compare, int little)
{
	if (compare == 1)
	{
		while (data->la->next->num != little)
				data->la = rra(data);
		data->la = pb(data);
	}
	else if (compare == 0)
	{
		while (data->la->next->num != little)
				data->la = ra(data);
		data->la = pb(data);
	}
}

void	ft_make_list_right100(t_struct *data, int len)
{
	int		big;
	int		i;

	big = ft_found_big_lb_100(data);
	i = ft_trie_100_b_biggest(data, big);
	len = ft_len_listb(data);
	len = len / 2;
	if (i == 0)
		return ;
	if (i > len)
	{
		len = ft_len_listb(data);
		while (i < len)
		{
			data->lb = rrb(data);
			i++;
		}
	}
	else if (i < len)
	{
		while (i < len)
		{
			data->lb = rb(data);
			i++;
		}
	}
}

int	ft_trie_100_b_biggest(t_struct *data, int little)
{
	t_list_b	*lb;
	int			i;

	i = 0;
	lb = data->lb->next;
	while (lb->next)
	{
		if (little <= lb->num)
			return (i);
		lb = lb->next;
		i++;
	}
	if (lb->num >= little)
		return (i);
	return (-1);
}

int	ft_trie_100_b_little(t_struct *data, int little)
{
	t_list_b	*lb;
	int			i;

	i = 0;
	lb = data->lb->next;
	while (lb)
	{
		if (little >= lb->num)
			return (i);
		lb = lb->next;
		i++;
	}
	return (-1);
}

int	ft_found_lower_b(t_struct *data)
{
	t_list_b	*lb;
	int			nb;

	lb = data->lb->next;
	nb = data->lb->next->num;
	while (lb && lb->next)
	{
		if (nb > lb->num)
			nb = lb->num;
		lb = lb->next;
	}
	if (lb->num < nb)
		nb = lb->num;
	return (nb);
}
