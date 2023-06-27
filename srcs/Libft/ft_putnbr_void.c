/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_void.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 09:48:56 by tpotilli@st       #+#    #+#             */
/*   Updated: 2023/04/24 09:05:52 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_ptr_len(uintptr_t num)
{
	int	len;

	len = 0;
	while (num > 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

void	ft_put_ptr(uintptr_t num)
{
	if (num >= 16)
	{
		ft_put_ptr(num / 16);
		ft_put_ptr(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar((num + '0'));
		else
			ft_putchar((num - 10 + 'a'));
	}
}

int	ft_print_ptr(unsigned long long ptr)
{
	int	cpt;

	cpt = 0;
	if (!ptr)
		return (write(1, "(nil)", 5), 5);
	cpt += write(1, "0x", 2);
	if (ptr == 0)
		cpt += write(1, "0", 1);
	else
	{
		ft_put_ptr(ptr);
		cpt += ft_ptr_len(ptr);
	}
	return (cpt);
}
