/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmagro-r <nmagro-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 12:48:21 by nmagro-r          #+#    #+#             */
/*   Updated: 2024/10/10 15:24:50 by nmagro-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	if (src[a] == '\0')
	{
		dst[b] = '\0';
		return (ft_strlen(src));
	}
	if (size == 0)
		return (ft_strlen(src));
	while (size > 1 && src[a] != '\0')
	{
		dst[b] = src[a];
		size--;
		a++;
		b++;
	}
	dst[b] = '\0';
	while (src[a] != '\0')
		a++;
	return (ft_strlen(src));
}
/*
int	main(void)
{
	char		*dst[50];
	const char	*src;
	size_t		size;

	src = "cocacola";
	size = 5;
	printf("%i",ft_strlcpy(dst,src,size));
	return(0);
}
*/
