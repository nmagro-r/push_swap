/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmagro-r <nmagro-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 12:31:47 by nmagro-r          #+#    #+#             */
/*   Updated: 2024/10/03 13:28:47 by nmagro-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	size_t	lens1;
	size_t	lens2;

	if (!s1 && !s2)
		return (NULL);
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	dst = ft_calloc(lens1 + lens2 + 1, sizeof(char));
	if (!dst)
		return (NULL);
	ft_memcpy(dst, s1, lens1);
	ft_memcpy(dst + lens1, s2, lens2);
	return (dst);
}
