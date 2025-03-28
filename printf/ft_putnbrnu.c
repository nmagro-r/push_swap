/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrnu.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmagro-r <nmagro-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 15:05:00 by nmagro-r          #+#    #+#             */
/*   Updated: 2025/03/28 15:05:04 by nmagro-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbrnu(unsigned int nb)
{
	int	count;

	count = 0;
	if (nb > 9)
		count += ft_putnbrnu(nb / 10);
	count += ft_putchar((nb % 10) + '0');
	return (count);
}
