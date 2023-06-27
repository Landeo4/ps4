/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 14:39:00 by tpotilli          #+#    #+#             */
/*   Updated: 2023/04/25 16:58:00 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
**	This function takes as parameter: 
**
**	argv (input)
**
** =====================================================
** =====================================================
**
** It will check string by string Character by
** Character if something other than a number is in the input
*/

bool ft_verif_input(char **argv)
{
	int i;
	int	j;

	i = 1;
	j = 0;
	while (argv[i])
	{
		while (argv[i][j])
		{
			if (argv[i][j] == ' ')
			{
				break ;
			}
			else if (!(ft_isdigit(argv[i][j]) == 1))
				return (0);
			j++;
		}
		i++;
		j = 0;
	}
	return (1);
}
