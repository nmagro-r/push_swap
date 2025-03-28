/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadec.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmagro-r <nmagro-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 15:04:14 by nmagro-r          #+#    #+#             */
/*   Updated: 2025/03/28 15:04:17 by nmagro-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexadec(unsigned int nb, char *base)
{
	long	size;
	long	num;
	int		count;

	count = 0;
	num = nb;
	size = ft_strlen(base);
	if (num < 0)
	{
		count = write(1, "-", 1);
		num = num * -1;
	}
	if (num >= size)
		count += ft_hexadec(num / size, base);
	count += write(1, &base[num % size], 1);
	return (count);
}
