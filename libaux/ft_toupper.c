/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmagro-r <nmagro-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:34:35 by nmagro-r          #+#    #+#             */
/*   Updated: 2024/10/10 15:29:28 by nmagro-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = 'A' + (c - 'a');
	return (c);
}
/*int	main(void)
{
	char	c;

	c = 'A';
	printf("%c",ft_toupper('A'));
	printf("%c",toupper('A'));
	return(0);
}
*/