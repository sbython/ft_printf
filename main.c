#include <stdio.h>
#include <stdarg.h>
#include "ft_printf.h"



// int main ()
// {
//     //sum(3,2,4,1);
//     // int d = -1;
//     // unsigned int j = -1;
//     // ft_putnbr(j);
//     // printf("\n%u", d);
//     char  u = 'f';
//     char *y = &u;
//     int i = ft_printf("%p erg",y);
//     int j = printf ("\n%p %  grrg",y);
//     printf("\n%d == %d", i , j);

// }
#include <limits.h>

int main(void)
{
    int i = ft_printf("%p ", 16);
    int ii = printf(" %p", 16);
    printf (" \n%d == %d", i , ii);
    return (0);
}