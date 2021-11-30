/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oouazize <oouazize@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 18:57:29 by oouazize          #+#    #+#             */
/*   Updated: 2021/11/24 16:33:12 by oouazize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_strlen(int nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
		i++;
	while (nb)
	{
		i++;
		nb /= 10;
	}
	return (i);
}

int	ft_putnbr(int nb)
{
	char	chr;
	int		len;
	int		n_len;

	len = ft_strlen(nb);
	n_len = nb;
	if (nb < 0)
	{	
		if (nb == -2147483648)
		{
			len = write(1, "-2147483648", 11);
			return (len);
		}
		nb *= -1;
		ft_putchar('-');
	}
	chr = nb % 10 + 48;
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar(chr);
	return (len);
}
