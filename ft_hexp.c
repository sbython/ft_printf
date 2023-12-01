#include "ft_printf.h"





static int    count(long int n)
{
    int    i;

    i = 0;
    while (n )
    {
        i++;
        n /= 16;
    }
    return (i);
}

int ft_hexp(size_t nbr )
{
  char *hex;
  int len = 2;

  
  
    if (nbr == 0)
        return (ft_putstr("(nil)"));
    ft_putstr("0x");
    hex = strdup("0123456789abcdef");

  char *str = malloc(sizeof(char) * (count(nbr) + 1));
  int i = 0;
  while(nbr)
  {
    str[i++] =  hex[nbr % 16];
    nbr /= 16;
  }
  str[i] = '\0';
  while (i-- > 0)
    ft_putchar(str[i]);
  len += strlen(str);
  free(str);
  return (len);
}

