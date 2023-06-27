/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing_manager.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 15:31:04 by tpotilli          #+#    #+#             */
/*   Updated: 2023/04/26 11:32:35 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_parsing_manager_sup(char **argv)
{
	if (ft_gui_check(argv) == 0)
	{
		ft_printf("wrong input");
		return (0);
	}
	return (1);
}

int ft_parsing_manager(int argc, char **argv)
{
	int i;
	char **str;

	i = 1;
	str = NULL;
	if (ft_parsing_manager_sup(argv) == 0)
		return (0);
	str = ft_strlcpy(argv);
	while (argv[i])
	{
		if (ft_verif_existing(argc) == 0)
		{
			ft_printf("please put more than 2 arguments");
			return (0);
		}
		if (ft_verif_input(str) == 0)
		{
			ft_printf("please put just numbers");
			return (0);
		}
	}
	if (ft_check_var(argv) == 0)
		return (0);
	return (1);
}

/*
int ft_parsing_manager(int argc, char **argv)
{
	int i;
	char **buf;

	i = 1;
	//write(2, RED, ft_strlen(RED));
	while (argv[i])
	{
		ft_manager_helper(argv);
		if ((ft_verif_existing(argc)) == 0)
		{
			write(2, "put at leat 3 argument\n", 24);
			return (2);
		}
		if ((ft_verif_input(argv)) == 0)
		{
			write(2, "wrong input, put numbers please\n", 20);
			return (0);
		}
		if ((ft_verif_int(buf)) == 0)
		{
			write(2, "wrong number please put an int\n", 15);
			return (0);
		}
		if ((ft_verif_duplicate(argv)) == 0)
		{
			write(2, "2 same numbers, don't put duplicate numbers\n", 43);
			return (0);
		}
		i++;
	}
	if (ft_check_var(argv) == 0)
		return (0);
	//write(2, RESET, ft_strlen(RESET));
	return (1);
}

int		ft_manager_helper(char **argv)
{
	int i;

	i = 0;
	while (argv[i])
	{
		if (ft_guillemet_check(argv, i) == 0)
			return (ft_printf("les Guillement sont pas bon"));
		ft_guillemet(argv);
		i++;
	}
	return (i);
}
*/