/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfeufeu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 14:04:50 by hfeufeu           #+#    #+#             */
/*   Updated: 2024/10/31 14:11:36 by hfeufeu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdarg.h>

void	miniputstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(1, s[i], 1);
		i++;
	}
}

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
	{
		miniputstr("(null)");
		return (6);
	}
	while (s[i])
	{
		write(1, s[i], 1);
		i++;
	}
	return (i);
}
