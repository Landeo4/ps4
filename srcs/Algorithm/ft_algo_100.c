/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_100.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 15:19:06 by tpotilli          #+#    #+#             */
/*   Updated: 2023/06/28 18:57:45 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
**	This function takes as parameter: 
**
**	data
**
** =====================================================
** =====================================================
**
** ft_algo_50 will sort all input under 100 except 10 and less
*/

void	ft_algo_100_manager(t_struct *data, int argc)
{
	int			moyennech1;
	int			token;
	int			i;
	int			first;

	i = 0;
	token = 1;
	first = 0;
	while (token != 5)
	{
		moyennech1 = ft_helper100man(token, moyennech1, data, argc);
		while (i < 20)
		{
			i++;
			ft_chunk(data, moyennech1, first);
			first++;
			if (ft_len_lista(data) == 0)
				break ;
			ft_print_listb(data);
		}
		i = 0;
		token++;
	}
	ft_algo100manager_helper2(data);
}

int	ft_algo100manager_helper2(t_struct *data)
{
	int	len;

	len = ft_len_listb(data);
	ft_make_list_right100(data, len);
	while (len > 0)
	{
		data->lb = pa(data);
		len--;
	}
	return (0);
}

int	ft_helper100man(int token, int moyennech1, t_struct *data, int argc)
{
	int			len;
	t_list_a	*la;

	la = data->la->next;
	len = ft_len_lista(data);
	moyennech1 = ft_somme_algo_100(la, argc, token, len);
	return (moyennech1);
}

int	ft_chunk(t_struct *data, int moyenne, int token)
{
	int			littlech1;
	int			littlech2;
	int			compare;
	int			little;
	t_list_a	*la;

	la = data->la->next;
	littlech1 = ft_found_pos_little_first_part(data, moyenne);
	littlech2 = ft_found_pos_little_last_part(data, moyenne);
	if (littlech1 <= littlech2 && littlech1 != -1)
		compare = 0;
	else
		compare = 1;
	if (compare == 1)
		little = ft_found_little_100_75(data, littlech2, la);
	else if (compare == 0)
		little = ft_found_little_100_25(data, littlech1, moyenne);
	if (token < 2)
	{
		ft_chunk_helper(data, compare, little);
		return (0);
	}
	ft_printf("lit1 %d, lit2 %d, little %d, compare %d\n", littlech1, littlech2, little, compare);
	if (compare == 1 && littlech2 > 25)
	{
		little = data->la->next->num;
		littlech1 = ft_trie_100_b_little(data, little);
		littlech2 = ft_trie_100_b_biggest(data, little);
		ft_100_swap_manager(data, littlech1, littlech2, moyenne);
		return (0);
	}
	else if (compare == 0 && littlech1 > 25)
	{
		little = data->la->next->num;
		littlech1 = ft_trie_100_b_little(data, little);
		littlech2 = ft_trie_100_b_biggest(data, little);
		ft_100_swap_manager(data, littlech1, littlech2, moyenne);
		return (0);
	}
	ft_take_25_algo100(data, compare, little, moyenne);
	return (0);
}

int	ft_chunk_helper(t_struct *data, int compare, int little)
{
	ft_take_first_second_algo100(data, compare, little);
	if (ft_len_listb(data) == 2)
		if (data->lb->next->num < data->lb->next->next->num)
			data->lb = rrb(data);
	return (0);
}
