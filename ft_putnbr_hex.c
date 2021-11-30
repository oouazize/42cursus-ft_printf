/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oouazize <oouazize@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 19:00:00 by oouazize          #+#    #+#             */
/*   Updated: 2021/11/24 16:34:25 by oouazize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hex(unsigned int n, int i)
{
	int	len;

	len = 0;
	if (n > 15)
	{
		len += ft_putnbr_hex(n / 16, i);
		len += ft_putnbr_hex(n % 16, i);
	}
	else
	{
		if (n < 10)
			len += ft_putchar(n + 48);
		else
		{
			if (i == 0)
				len += ft_putchar(n + 87);
			else
				len += ft_putchar(n + 55);
		}
	}
	return (len);
}
