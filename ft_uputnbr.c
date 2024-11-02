/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uputnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfeufeu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:14:38 by hfeufeu           #+#    #+#             */
/*   Updated: 2024/11/02 17:29:39 by hfeufeu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_uputnbr(unsigned int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
		i += 1;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		i += ft_putchar(nb + '0');
	return (i);
}
