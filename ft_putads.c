/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putads.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oouazize <oouazize@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 19:03:29 by oouazize          #+#    #+#             */
/*   Updated: 2021/11/24 16:31:29 by oouazize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_len(unsigned long long n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		len++;
		n /= 16;
	}
	return (len);
}

static void	ft_pointer(unsigned long long n)
{
	if (n > 15)
	{
		ft_pointer(n / 16);
		ft_pointer(n % 16);
	}
	else
	{
		if (n < 10)
			ft_putchar(n + 48);
		else
			ft_putchar(n + 87);
	}
}

int	ft_putads(unsigned long long n)
{
	int	len;

	len = 0;
	len += write(1, "0x", 2);
	if (n == 0)
		len += write(1, "0", 1);
	else
	{
		ft_pointer(n);
		len += ft_len(n);
	}
	return (len);
}
