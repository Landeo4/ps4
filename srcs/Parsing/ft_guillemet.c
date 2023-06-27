/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_guillemet.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 09:45:40 by tpotilli          #+#    #+#             */
/*   Updated: 2023/04/26 11:24:10 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
**	This function takes as parameter: 
**
**	argv 
**
** =====================================================
** =====================================================
**
** ft_gui_check will check if all things in quotation mark is ok
*/

int	ft_gui_check(char **argv)
{
	int		i;
	int		j;

	j = 0;
	i = 1;
	while (argv[i])
	{
		if (argv[i][j] == '"')
		{
			while (argv[i][j])
			{
				if (ft_verif_input(argv) == 0)
					return (0);
				ft_printf("yo");
				j++;
			}
		}
		i++;
	}
	return (1);
}

/*
char	**ft_cpy_gui(char **argv)
{
	int		j;
	char	**str;
	int		i;

	i = 1;
	str = NULL;
	j = 0;
	if (argv[i] == NULL)
		return (NULL);
	while (argv[i])
	{
		while (argv[i][j])
		{
			str[i][j] = argv[i][j];
			j++;
		}
		i++;
		j = 0;
	}
	return (str);
}*/

/*
int	ft_gui_check(char **argv)
{
	int		i;
	char	**str;
	int		j;

	j = 0;
	str = NULL;
	i = 1;
	while (argv[i])
	{
		while (argv[i][j] == 22)
		{
			str[i] = ft_cpy_gui(argv, i);
			j++;
		}
		i++;
	}
	return (1);
}

char	*ft_cpy_gui(char **argv, int i)
{
	int	j;
	char *str;

	str = NULL;
	j = 0;
	if (argv[i] == NULL)
		return (NULL);
	while (argv[i])
	{
		while (argv[i][j])
		{
			str[j] = argv[i][j];
			j++;
		}
		i++;
		j = 0;
	}
	return (str);
}
*/