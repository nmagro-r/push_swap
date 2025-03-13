
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