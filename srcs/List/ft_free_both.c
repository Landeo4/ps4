/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_both.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 18:06:24 by tpotilli          #+#    #+#             */
/*   Updated: 2023/04/26 18:02:22 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_both(t_list_a *la, t_list_b *lb)
{
	t_list_a	*tmp1;
	t_list_b	*tmp2;

	tmp1 = NULL;
	while (la)
	{
		tmp1 = la->next;
		free(la);
		la = tmp1;
	}
	while (lb)
	{
		tmp2 = lb->next;
		free(lb);
		lb = tmp2;
	}
}
