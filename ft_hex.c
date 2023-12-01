#include "ft_printf.h"



static int    count(long int n)
{
    int    i;

    i = 0;
    while (n)
    {
        i++;
        n /= 16;
    }
    return (i );
}

int ft_hex(unsigned int nb , int c)
{
  char *hex;
  int len = 0;

  if (c == 1)
    hex = strdup("0123456789abcdef");
  if (c == 2)
    hex = strdup("0123456789ABCDEF");
if (nb == 0)
    return(ft_putchar('0'));

  char *str = malloc(sizeof(char) * (count(nb) + 1));
  int i = 0;
  while(nb)
  {
    str[i++] =  hex[nb % 16];
    nb /= 16;
  }
  str[i] = '\0';
  while (i-- > 0)
    ft_putchar(str[i]);
  len += strlen(str);
  free(str);
  return (len);
}

