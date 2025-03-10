/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmagro-r <nmagro-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:19:26 by nmagro-r          #+#    #+#             */
/*   Updated: 2024/10/10 15:26:04 by nmagro-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*origin;
	unsigned char	*destiny;
	size_t			i;

	if ((dest == NULL) && (src == NULL))
		return (NULL);
	origin = (unsigned char *)src;
	destiny = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		destiny[i] = origin[i];
		i++;
	}
	return (destiny);
}
