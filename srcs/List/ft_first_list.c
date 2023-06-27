/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_first_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 18:25:28 by tpotilli          #+#    #+#             */
/*   Updated: 2023/04/26 18:05:06 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list_a	*ft_first_la(t_struct *data)
{
	data->la = malloc(sizeof(t_list_a));
	if (!data->la)
		return (NULL);
	data->la->next = NULL;
	return (data->la);
}

t_list_b	*ft_first_lb(t_struct *data)
{
	data->lb = malloc(sizeof(t_list_b));
	if (!data->lb)
		return (NULL);
	data->lb->next = NULL;
	return (data->lb);
}
