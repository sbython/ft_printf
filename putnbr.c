#include "ft_printf.h"
// static int    count(long int n)
// {
//     int    i;

//     i = 0;
//     while (n > 9)
//     {
//         i++;
//         n /= 10;
//     }
//     return (i + 1);
// }
int        ft_putnbr(long int nbr)
{
    int len = 0;
    char str[10];
    int i = 0;

    if (nbr == 0)
        return ft_putchar('0');
    else if (nbr < 0)
    {
        len += ft_putchar('-');
        nbr = -nbr;
    }
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