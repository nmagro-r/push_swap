/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmagro-r <nmagro-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 15:04:30 by nmagro-r          #+#    #+#             */
/*   Updated: 2025/03/28 15:04:35 by nmagro-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

static int	assig_ft(char const *format, int *result, int *p, va_list args)
{
	if (format[*p] == 's')
		*result += ft_putstr(va_arg(args, char *));
	else if (format[*p] == 'c')
		*result += ft_putchar(va_arg(args, int));
	else if (format[*p] == 'd' || format[*p] == 'i')
		*result += ft_putnbr(va_arg(args, int));
	else if (format[*p] == 'u')
		*result += ft_putnbrnu(va_arg(args, unsigned int));
	else if (format[*p] == 'p')
		*result += ft_pointer_hex(va_arg(args, unsigned long),
				"0123456789abcdef", 1);
	else if (format[*p] == 'x')
		*result += ft_hexadec(va_arg(args, unsigned int), "0123456789abcdef");
	else if (format[*p] == 'X')
		*result += ft_hexadec(va_arg(args, unsigned int), "0123456789ABCDEF");
	else if (format[*p] == '%')
		*result += ft_putchar('%');
	return (*result);
}

int	ft_printf(char const *format, ...)
{
	va_list	args;
	int		result;
	int		p;

	p = 0;
	result = 0;
	va_start(args, format);
	while (format[p] != '\0')
	{
		if (format[p] == '%')
		{
			p++;
			result = assig_ft(format, &result, &p, args);
		}
		else
			result += ft_putchar(format[p]);
		p++;
	}
	va_end(args);
	return (result);
}
