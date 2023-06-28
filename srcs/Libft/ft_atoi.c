/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 12:52:13 by tpotillion        #+#    #+#             */
/*   Updated: 2023/06/28 08:04:42 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
**	this function takes as parameters:
**	const char *nptr -> the string you want to turn on int
**
** 	===========================================================================
**	
**	ft_atoi is used to turn an char to an int,
**	to do this he go throught the string until he see a plus or less
**	then atoi start coping the string in an int to perform the conversion
*/

#include "push_swap.h"

int	ft_atoi(char *nptr)
{
	int	i;
	int	result;
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
	return (result * sign);
}
/*
int main()
{
	printf("%d",ft_atoi("456"));
}
*/