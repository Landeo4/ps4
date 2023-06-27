/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 16:27:36 by tpotilli          #+#    #+#             */
/*   Updated: 2023/03/14 15:22:52 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

long	ft_atol(char *nptr)
{
	int	i;
	long result;
	int	sign;

	i = 0;
	result = 0;
	sign = 1;
	if (!(nptr))
		return (0);
	if (nptr)
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ')
		i++;
	if (nptr[i] == '-')
	{
		sign *= -1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (result * (long)sign);
}
