/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 13:30:32 by tpotilli          #+#    #+#             */
/*   Updated: 2023/06/28 10:27:55 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**ft_strlcpy(char **src)
{
	size_t		j;
	char		**dest;
	int			i;

	i = 0;
	j = 0;
	dest = NULL;
	if (!dest || !src)
		return (0);
	ft_printf("%s", src);
	while (src[i])
	{
		while (src[i][j])
		{
			if (src[i][j] == 22)
				break;
			else
				dest[i][j] = src[i][j];
			j++;
		}
		i++;
		j = 0;
		dest[i][j] = '\0';
	}
	dest[i] = '\0';
	return (dest);
}
