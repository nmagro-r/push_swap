/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmagro-r <nmagro-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 15:05:11 by nmagro-r          #+#    #+#             */
/*   Updated: 2025/03/28 15:05:19 by nmagro-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_putstr(const char *s)
{
	int	count;

	count = 0;
	if (!s)
	{
		count += ft_putstr("(null)");
		return (count);
	}
	count = write(1, s, ft_strlen(s));
	return (count);
}
