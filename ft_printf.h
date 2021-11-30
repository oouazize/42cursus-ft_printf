/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oouazize <oouazize@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 18:03:16 by oouazize          #+#    #+#             */
/*   Updated: 2021/11/24 16:24:29 by oouazize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <limits.h>

int	ft_putads(unsigned long long n);
int	ft_putstr(char *s);
int	ft_putnbr_uns(unsigned int nb);
int	ft_putnbr_hex(unsigned int n, int i);
int	ft_putnbr(int nb);
int	ft_putchar(int c);
int	ft_printf(const char *format, ...);

#endif
