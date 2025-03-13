
#include "ft_printf.h"

int	ft_putchar(int c)
{
	int	count;

	count = 0;
	count += write(1, &c, 1);
	return (count);
}