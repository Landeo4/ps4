/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_100_trie.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 07:27:15 by tpotilli          #+#    #+#             */
/*   Updated: 2023/06/28 17:44:26 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_trie_lb_1(int i, int len, t_struct *data, int nb)
{
	len = len / 2;
	if (i > len)
	{
		len = ft_len_listb(data);
		while (len > i)
		{
			if (nb != data->la->next->num)
				data = rrr(data);
			else
				data->lb = rrb(data);
			i++;
		}
	}
	else if (i < len || i == len)
		ft_trie_lb_1helper(i, len, data, nb);
}

void	ft_trie_lb_1helper(int i, int len, t_struct *data, int nb)
{
	if (i < len)
	{
		while (i > 0)
		{
			if (nb != data->la->next->num)
				data = rr(data);
			else
				data->lb = rb(data);
			i--;
		}
	}
	else if (i == len)
	{
		while (i > 0)
		{
			if (nb != data->la->next->num)
				data = rr(data);
			else
				data->lb = rb(data);
			i--;
		}
	}
}

void	ft_trie_la_1(int i, int len, t_struct *data, int nb)
{
	len = len / 2;
	if (i > len)
	{
		len = ft_len_lista(data);
		while (len > i)
		{
			if (nb != data->la->next->num)
				data = rrr(data);
			else
				data->la = rra(data);
			i++;
		}
	}
	else if (i < len || i == len)
		ft_trie_lb_1helper(i, len, data, nb);
}

void	ft_trie_la_1helper(int i, int len, t_struct *data, int nb)
{
	if (i < len)
	{
		while (i > 0)
		{
			if (nb != data->la->next->num)
				data = rr(data);
			else
				data->la = ra(data);
			i--;
		}
	}
	else if (i == len)
	{
		while (i > 0)
		{
			if (nb != data->la->next->num)
				data = rr(data);
			else
				data->la = ra(data);
			i--;
		}
	}
}

void	ft_best_place_102help(int i, int len, t_struct *data)
{
		if (i > len)
	{
		len = ft_len_listb(data);
		if (i == len)
		{
			data->lb = rrb(data);
			return ;
		}
		i = len - i;
		while (i > 0)
		{
			data->lb = rrb(data);
			i--;
		}
	}
	else if (i < len)
	{
		while (i > 0)
		{
			data->lb = rb(data);
			i--;
		}
	}
}
