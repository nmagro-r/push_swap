/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer_hex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmagro-r <nmagro-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 15:04:23 by nmagro-r          #+#    #+#             */
/*   Updated: 2025/03/28 15:04:26 by nmagro-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer_hex(unsigned long long nb, char *base, int flag)
{
	unsigned long long	size;
	unsigned long long	num;
	int					count;

	count = 0;
	if (!nb)
	{
		count += ft_putstr("(nil)");
		return (count);
	}
	num = nb;
	size = ft_strlen(base);
	if (flag)
		count += ft_putstr("0x");
	if (num >= size)
		count += ft_pointer_hex(nb / size, base, 0);
	count += write(1, &base[num % size], 1);
	return (count);
}
