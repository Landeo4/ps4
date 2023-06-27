/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_100_helper2.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 22:17:25 by tpotilli          #+#    #+#             */
/*   Updated: 2023/06/27 21:16:13 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_somme_algo_100(t_list_a *la, int argc, int token, int len)
{
	int			chiffre;
	double		last;

	if (token == 5)
	{
		chiffre = 2147483647;
		return (chiffre);
	}
	last = token * 0.2;
	chiffre = 0;
	chiffre = ft_somme_100helper(len, argc, la, token);
	chiffre = chiffre * last;
	return (chiffre);
}

int	ft_somme_100helper(int len, int argc, t_list_a *la, int token)
{
	static int	chiffre;

	if (token > 1)
	{
		return (chiffre);
	}
	chiffre = 0;
	while (len > 0 && la)
	{
		chiffre = chiffre + la->num;
		la = la->next;
		len--;
	}
	chiffre = chiffre / argc;
	chiffre = chiffre * 2;
	return (chiffre);
}

void	ft_take_25_algo100(t_struct *data, int compare, int little, int chunk)
{
	int		lit1;
	int		lit2;
	int		nb;
	int		len;
	int		nb2;

	len = ft_len_listb(data);
	len = len / 2;
	nb = best_place_manager(data, little);
	nb2 = ft_best_place_b_mang(data, little);
	if (ft_len_lista(data) == 1)
		lit1 = 0;
	else if (compare == 1)
	{
		while (data->la->next->num != little)
		{
			if (nb > 0 && nb2 > len)
			{
				data = rrr(data);
				nb2--;
			}
			else
				data->la = rra(data);
			nb--;
		}
	}
	else if (compare == 0)
	{
		while (data->la->next->num != little)
		{
			if (nb > 0 && nb2 <= len)
			{
				data = rr(data);
				nb2--;
			}
			else
				data->la = ra(data);
			nb--;
		}
	}
	lit1 = ft_trie_100_b_little(data, little);
	lit2 = ft_trie_100_b_biggest(data, little);
	ft_100_swap_manager(data, lit1, lit2, chunk);
}

int	ft_best_place_b_mang(t_struct *data, int little)
{
	int	nb;
	int	j;

	j = ft_trie_100_b_biggest(data, little);
	nb = 0;
	if (j == -1)
		nb = ft_found_pos_big_lb(data);
	else
		nb = ft_found_best_place100(data, data->lb, little);
	return (nb);
}

int	ft_found_pos_big_lb(t_struct *data)
{
	t_list_b	*lb;
	int			nb;
	int			nb2;

	nb = ft_found_big_lb_100(data);
	lb = data->lb->next;
	nb2 = 0;
	while (lb->next && lb->num != nb)
	{
		nb2++;
		lb = lb->next;
	}
	return (nb2);
}

int	best_place_manager(t_struct *data, int little)
{
	t_list_b	*lb;
	int			token;
	int			nb;

	token = 0;
	lb = data->lb->next;
	while (lb)
	{
		if (little < lb->num)
			token = 1;
		lb = lb->next;
	}
	lb = data->lb->next;
	if (token == 1)
		nb = ft_found_best_place100(data, data->lb->next, little);
	else
	{
		nb = ft_found_big_lb_100(data);
		while (lb->num != nb)
			lb = lb->next;
	}
	return (nb);
}

int	ft_verif_lb(t_struct *data)
{
	t_list_b	*lb;
	int			nb;

	lb = data->lb;
	if (data->lb->next->num < data->lb->next->next->num)
	{
		lb = sb(lb, data);
	}
	nb = data->lb->next->num;
	lb = data->lb->next;
	while (lb)
	{
		if (nb < lb->num)
			return (0);
		lb = lb->next;
	}
	return (-1);
}

int	ft_found_big_lb_100(t_struct *data)
{
	int			nb;
	t_list_b	*lb;

	lb = data->lb->next->next;
	nb = data->lb->next->num;
	while (lb)
	{
		if (nb < lb->num)
			nb = lb->num;
		lb = lb->next;
	}
	return (nb);
}
