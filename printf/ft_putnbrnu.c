
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
