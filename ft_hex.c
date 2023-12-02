#include "ft_printf.h"



static int    count(long int n)
{
    int    i;

    i = 0;
    while (n > 15)
    {
        i++;
        n /= 16;
    }
    return (i + 1);
}

int ft_hex(unsigned int nb , int c)
{
  char *hex;
  int len = 0;
  if (nb == 0)
    return(ft_putchar('0'));
  char *str = malloc(sizeof(char) * (count(nb) + 1));
  if(!str)
    return (0);
  
  if (c == 1)
    hex = ft_strdup("0123456789abcdef");
  if (c == 2)
    hex = ft_strdup("0123456789ABCDEF");

  int i = 0;
  while(nb)
  {
    str[i++] =  hex[nb % 16];
    nb /= 16;
  }
  str[i] = '\0';
  while (i-- > 0)
    ft_putchar(str[i]);
  len += ft_strlen(str);
  free(str);
  free(hex);
  return (len);
}

