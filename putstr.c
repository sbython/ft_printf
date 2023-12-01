#include "ft_printf.h"

void ft_puts(char *str)
{
    int i = 0 ;
    while(str[i])
            write(1, &str[i++], 1);
}
int ft_putstr(char *str)
{
    if (!str)
    {
        write(1, "(NULL)", strlen("(null)"));
        return (6);
    }
        
    ft_puts(str);
    return (strlen(str));
}