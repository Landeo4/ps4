/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif_duplicate.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:27:18 by tpotilli          #+#    #+#             */
/*   Updated: 2023/03/13 13:52:42 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
**	This function takes as parameter: 
**
**	char argc(input)
**
** =====================================================
** =====================================================
**
** It will check if there is duplicate number
*/

bool ft_verif_duplicate(char **argv)
{
	int i;
	int j;

	i = 1;
	j = 2;
	int cpt = 0;
	while (argv[i] && argv[i + 1])
	{
		cpt = ft_atoi(argv[i]);
		while (argv[j])
		{
			if (ft_atoi(argv[j]) == cpt)
			{
				printf("%sIl y a des doublons\n%s",RED, RESET);
				return (0);
			}
			j++;
		}
		i++;
		j = i + 1;
	}
	return (1);
}

/*
int ft_get_number(char **argc, int i, int j)
{
	int nb;

	nb = argc[i][j] + '0';
}
*/
