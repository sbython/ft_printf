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
    int a[10] = { 0 };
    char *p = "Hello, wiorld!";
    a[0] = ft_printf(" NULL %s NULL ", NULL);
    a[1] = ft_printf("%s %s\n", "Hello, world!", (char *)NULL);
    a[2] = ft_printf("%p %p\n", p , (char *)NULL);
    a[3] = ft_printf("%d%i%u \n", 0,-10,100);
    a[4] = ft_printf("%x %X\n", 1337, 1337);
    a[5] = ft_printf("%x %X\n", 0, 0);
    a[6] = ft_printf("%x %X\n", -16, -16);
    a[7] = ft_printf("%c %c %c %c", 'a', '1', 32, '\n');
    a[8] = ft_printf("%c%c%c%c\n", 'a', 'a', 'a', 'a');
    a[9] = ft_printf("Hello, world!\n %");
    printf("---\tBEGIN PRINTF\t---\n");

    int b[10] = { 0 };
    b[0] = printf(" NULL %s NULL ", NULL);
    b[1] = printf("%s %s\n", "Hello, world!", (char *)NULL);
    b[2] = printf("%p %p\n", p , (char *)NULL);
    b[3] = printf("%d%i%u \n", 0,-10,100);
    b[4] = printf("%x %X\n", 1337, 1337);
    b[5] = printf("%x %X\n", 0, 0);
    b[6] = printf("%x %X\n", -16, -16);
    b[7] = printf("%c %c %c %c", 'a', '1', 32, '\n');
    b[8] = printf("%c%c%c%c\n", 'a', 'a', 'a', 'a');
    b[9] = printf("Hello, world!\n %");
    int success = 1;
    for (int i = 2; i < 10; i++)
    {
        if (a[i] != b[i])
        {
            printf("[%d]: Return doesn't match, expected %d, received %d\n", i, b[i], a[i]);
            success = 0;
        }
    if (success)
        printf("SUCCESS RETURN VALUES MATCH\n");
    }

    return (0);
}