/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 16:45:51 by tpotilli          #+#    #+#             */
/*   Updated: 2023/04/27 17:39:24 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// pour swap deux int

int		*ft_swap(int *a, int ind1, int ind2)
{
	int tmp;

	tmp = a[ind1];
	a[ind1] = a[ind2];
	a[ind2] = tmp;
	ft_printf("\nswap = %d et swap+1 = %d", a[ind1], a[ind2]);
	return (a);
}
