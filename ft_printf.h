/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <msbai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 23:42:30 by msbai             #+#    #+#             */
/*   Updated: 2023/12/03 15:37:31 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int		ft_putnbr(long int nbr);
int		ft_putchar(char c);
int		ft_unputnbr(unsigned int nbr);
int		ft_putstr(char *str);
int		ft_printf(const char *format, ...);
void	*ft_memcpy(void *dest, const void *src, size_t n);
char	*ft_strdup(const char *s);
size_t	ft_strlen(const char *s);
int		ft_hexp(long unsigned int nb, int i);
int		ft_hex(unsigned int nb, int c, int i);

#endif