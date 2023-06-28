/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 14:14:19 by tpotilli@st       #+#    #+#             */
/*   Updated: 2023/06/28 18:06:44 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_struct	data;
	int			i;

	i = argc - 1;
	/*if (ft_parsing_manager(argc, argv) == 0)
		return (0);*/
	//ft_printf("c'est bon pour les guillemet");
	ft_init_struct(&data);
	while (i > 0)
	{
		ft_addata(&data, ft_atoi(argv[i]), 1);
		i--;
	}
	ft_algo_manager(&data, argc - 1);
	ft_printf("liste final\n");
	ft_print_lista(&data);
	ft_free_lista(&data);
	ft_free_listb(&data);
}
