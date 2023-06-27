/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 14:29:06 by tpotilli          #+#    #+#             */
/*   Updated: 2023/04/24 11:19:00 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int ft_max(char *argv)
{
	long max;
	long atol;

	max = INT_MAX;
	atol = ft_atol(argv);
	if (atol > max)
		return (0);
	return (1);
}

static int ft_min(char *argv)
{
	long min;
	long atol;

	min = INT_MIN;
	atol = ft_atol(argv);
	if (atol < min)
		return (0);
	return (1);
}

bool ft_verif_int(char *argv)
{
	int i;

	i = 0;
	if (argv[i] == '-')
	{
		if (ft_strlen(argv) > 11)
			return (0);
		if ((ft_strlen(argv) == 11) && (ft_min(argv) != 1))
			return (0);
	}
	else if (ft_strlen(argv) > 10)
		return (0);
	else if (ft_strlen(argv) == 10 && (ft_max(argv) != 1))
		return (0);
	return (1);
}
