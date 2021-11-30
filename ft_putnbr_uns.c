/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_uns.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oouazize <oouazize@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 19:16:06 by oouazize          #+#    #+#             */
/*   Updated: 2021/11/24 16:34:39 by oouazize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ulen(unsigned int n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

int	ft_putnbr_uns(unsigned int nb)
{
	char	chr;
	int		len;

	if (nb == 0)
		len = write(1, "0", 1);
	else
	{
		len = ft_ulen(nb);
		chr = nb % 10 + 48;
		if (nb >= 10)
			ft_putnbr_uns(nb / 10);
		ft_putchar(chr);
	}
	return (len);
}
