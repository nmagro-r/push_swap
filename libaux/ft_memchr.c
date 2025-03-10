/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmagro-r <nmagro-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 18:28:19 by nmagro-r          #+#    #+#             */
/*   Updated: 2024/10/10 15:27:24 by nmagro-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	character;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	character = (unsigned char)c;
	while (n > i)
	{
		if (str[i] == character)
			return (i + (void *)s);
		i++;
	}
	return (NULL);
}
/*int	main (void)
{
	const void *s = "cocacola"
	int	c = "a"
	size_t n = 6

	printf("%p", ft_memchr(s, c, n));
	return(0);
}
*/