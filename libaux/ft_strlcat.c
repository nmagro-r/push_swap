/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmagro-r <nmagro-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:20:40 by nmagro-r          #+#    #+#             */
/*   Updated: 2024/10/10 15:28:25 by nmagro-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	size_dst;
	size_t	size_src;
	size_t	size_dst_origin;

	size_dst = ft_strlen(dst);
	size_dst_origin = ft_strlen(dst);
	size_src = 0;
	if (size <= size_dst_origin)
		return (ft_strlen(src) + size);
	while ((size_dst_origin + 1 < size) && src[size_src] != '\0')
	{
		dst[size_dst_origin] = src[size_src];
		size_dst_origin++;
		size_src++;
	}
	dst[size_dst_origin] = '\0';
	return (ft_strlen(src) + size_dst);
}

/*int main(void)
{
	char dst[4] = "";
	const char src[8] = "periplo";
	size_t size = 100;
	printf("%ld",ft_strlcat(dst,"thx to ntoniolo for this test !", 4));
	return(0);
}*/