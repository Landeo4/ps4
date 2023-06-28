/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_500.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 13:27:25 by tpotilli          #+#    #+#             */
/*   Updated: 2023/06/28 15:17:29 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_algo_500_manager(t_struct *data, int argc)
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
		while (i < 100)
		{
			i++;
			ft_chunk(data, moyennech1, first);
			first++;
			//ft_print_listb(data);
			if (ft_len_lista(data) == 0)
				break ;
		}
		i = 0;
		token++;
	}
	ft_algo100manager_helper2(data);
}

int	ft_somme_algo_500(t_list_a *la, int argc, int token, int len)
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
