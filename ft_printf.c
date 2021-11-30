/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oouazize <oouazize@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 16:33:54 by oouazize          #+#    #+#             */
/*   Updated: 2021/11/24 16:32:43 by oouazize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_switch(va_list ap, char pf)
{
	int	len;

	len = 0;
	if (pf == 's')
		len += ft_putstr(va_arg(ap, char *));
	if (pf == 'd' || pf == 'i')
		len += ft_putnbr(va_arg(ap, int));
	if (pf == 'c')
		len += ft_putchar(va_arg(ap, int));
	if (pf == 'x')
		len += ft_putnbr_hex(va_arg(ap, unsigned int), 0);
	if (pf == 'X')
		len += ft_putnbr_hex(va_arg(ap, unsigned int), 1);
	if (pf == 'u')
		len += ft_putnbr_uns(va_arg(ap, unsigned int));
	if (pf == 'p')
		len += ft_putads(va_arg(ap, unsigned long long));
	if (pf == '%')
		len += ft_putchar('%');
	return (len);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		j;
	va_list	ap;

	i = 0;
	j = 0;
	va_start(ap, format);
	while (format[j])
	{
		if (format[j] == '%')
		{
			i += ft_switch(ap, format[j + 1]);
			j++;
		}
		else
			i += ft_putchar(format[j]);
		j++;
	}
	va_end(ap);
	return (i);
}
// #include <limits.h>
// int main()
// {
// 	char *d="hello";
// 	int l1 = printf("%d", -2147483648);
// 	printf("\n");
// 	int l2 = ft_printf("%d", -2147483648);

// 	printf("\nprintf %d\n", l1);
// 	printf("my printf %d",l2);
// }
