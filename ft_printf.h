#ifndef MY_LIB_H
# define MY_LIB_H
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
int         ft_putnbr(long int nbr);
int         ft_putchar(char c);
int         ft_unputnbr(unsigned int nbr);
int         ft_putstr(char *str);
int         ft_printf(const char *format, ...);
void        *ft_memcpy(void *dest, const void *src, size_t n);
char        *ft_strdup(const char *s);
size_t      ft_strlen(const char *s);
int         ft_hexp(size_t nb );
int         ft_hex(unsigned int nb , int c);

#endif