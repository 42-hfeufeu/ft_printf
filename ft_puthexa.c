/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfeufeu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 17:02:33 by hfeufeu           #+#    #+#             */
/*   Updated: 2024/11/02 17:50:22 by hfeufeu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_puthexa(unsigned int nb)
{
	int	i;
	
	i = 0;
	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
		i++;
	}
	if (nb > 9)
	{
		ft_puthexa(nb / 16);
		ft_puthexa(nb % 16);
	}
	else
		i += ft_putchar(nb + '0');
	return (i);
}
