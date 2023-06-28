/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_100_b2negatif.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 11:13:31 by tpotilli          #+#    #+#             */
/*   Updated: 2023/06/28 18:55:59 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_100_swap_manager_negative(t_struct *data, int lit1, int lit2, int chunk)
{
	int			cpt;
	t_list_b	*lb;

	cpt = 0;
	lb = data->lb->next;
	ft_printf("lit1 %d, lit2 %d \n", lit1, lit2);
	if (lit1 != -1 && lit2 != -1)
	{
		ft_trie_1000_manager(data, chunk, 1);
		ft_printf("je suis dans b2 negatif\n");
		data->la = pb(data);
		return ;
	}
	else if (lit1 == -1)
		ft_100_lit10(lb, data, cpt);
	else if (lit2 == -1)
	{
		ft_make_best_place_alg100_0(data, data->lb->next);
		ft_printf("salut");
		data->la = pb(data);
	}
}

int	ft_found_best_place1000(t_struct *data, t_list_b *lb, int nb)
{
	int			cpt;

	cpt = 1;
	lb = data->lb->next;
	ft_printf("je suis dans bestplace\n");
	while (lb && lb->next)
	{
		if (lb->num < nb && nb < lb->next->num)
			return (cpt);
		cpt++;
		lb = lb->next;
	}
	return (-1);
}

void	ft_trie_1000_manager(t_struct *data, int chunk, int token)
{
	int			len;
	int			lbnum;
	int			lanum;
	t_list_b	*lb;

	lb = data->lb->next;
	lbnum = ft_found_best_place1000(data, lb, data->la->next->num);
	lanum = ft_reduce_managera(data, chunk);
	len = ft_len_listb(data);
	ft_printf("len %d, lbnum %d, lanum %d\n", len, lbnum, lanum);
	/*if (data->la->next->num < 0)
	{
		ft_trie_lb_1(lb)
	}*/
	if (token == 1)
		ft_trie_lb_1(lbnum, len, data, lanum);
	else
		ft_trie_la_1(lanum, len, data, lbnum);
}


void	ft_take_25_algo1000(t_struct *data, int compare, int little, int chunk)
{
	int		lit1;
	int		lit2;
	int		len;

	len = ft_len_listb(data);
	len = len / 2;
	if (ft_len_lista(data) == 1)
		lit1 = 0;
	else
		ft_take_25_help(compare, data, little, len);
	lit1 = ft_trie_100_b_little(data, little);
	lit2 = ft_trie_1000_b_biggest(data, little);
	ft_printf("compare %d, little %d, len %d, lit1 %d, lit2 %d\n", compare, little, len, lit1, lit2);
	ft_100_swap_manager(data, lit1, lit2, chunk);
}

int	ft_trie_1000_b_biggest(t_struct *data, int little)
{
	t_list_b	*lb;
	int			i;
	int			len;

	len = ft_len_listb(data);
	i = 0;
	lb = data->lb->next;
	while (lb)
	{
		if (little >= lb->num)
			return (i);
		if (len == 0)
			return (-1);
		lb = lb->next;
		i++;
		len--;
	}
	return (-1);
}

void	ft_100_lit10(t_list_b *lb, t_struct *data, int cpt)
{
	int		len;
	int		i;

	len = ft_len_listb(data);
	len = len / 2;
	cpt = ft_found_lower_b(data);
	i = ft_found_pos_little(data);
	ft_printf("cpt %d\n", cpt);
	while (lb->next)
	{
		if (i > len)
		{
			if (cpt == data->lb->next->num)
			{
				data->la = pb(data);
				return ;
			}
			lb = lb->next;
			data->lb = rrb(data);
		}
		else if (i < len)
		{
			if (cpt == data->lb->next->num)
			{
				data->la = pb(data);
				return ;
			}
			lb = lb->next;
			data->lb = rb(data);
		}
	}
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
	ft_printf("nb %d, len %d, i %d\n", nb, len, i);
	ft_bp_alg100help0(len, i, data, nb);
}

void	ft_bp_alg100help0(int len, int i, t_struct *data, int nb)
{
	len = len / 2;
	if (i == len)
	{
		len = ft_len_listb(data);
		while (i >= 0)
		{
			data->lb = rb(data);
			i--;
		}
	}
	else if (i > len)
	{
		len = len * 2;
		while (i < len)
		{
			if (data->lb->next->num == nb)
				return ;
			data->lb = rrb(data);
			i++;
		}
	}
	else if (i < len)
	{
		while (i > 0)
		{
			if (data->lb->next->num == nb)
				return ;
			data->lb = rb(data);
			i--;
		}
	}
}

void	ft_take_best_place1022(t_struct *data, int nb)
{
	int			len;
	t_list_b	*lb;
	int			i;
	int			len2;

	i = 1;
	lb = data->lb->next;
	len2 = ft_len_listb(data);
	len = ft_len_listb(data);
	len = len / 2;
	if (len * 2 != len2)
		len++;
	while (lb->num != nb)
	{
		i++;
		lb = lb->next;
	}
	lb = data->lb->next;
	if (i == 0)
		data->lb = rb(data);
	else
		ft_best_place_1022_helper(i, len, data);
}

void	ft_best_place_1022_helper(int i, int len, t_struct *data)
{
	if (i == len)
	{
		len = ft_len_listb(data);
		while (i > 0)
		{
			data->lb = rb(data);
			i--;
		}
	}
	else
		ft_best_place_102help(i, len, data);
}

void	ft_best_place_1020help(int i, int len, t_struct *data)
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
