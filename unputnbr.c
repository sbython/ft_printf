#include "ft_printf.h"

int        ft_unputnbr(unsigned int nbr)
{
    int len = 0;
    char str[10];
    int i = 0;
    if (nbr == 0)
        return ft_putchar('0');
   while (nbr > 0)
	{
		str[i++] = (nbr % 10) + '0';
		nbr /= 10;
	}
    len += i;
	while (i > 0)
	{
		ft_putchar(str[--i]);
	}
    return (len);
}