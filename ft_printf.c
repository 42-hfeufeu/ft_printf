/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfeufeu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:43:56 by hfeufeu           #+#    #+#             */
/*   Updated: 2024/10/31 14:31:38 by hfeufeu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	select(char c, va_list args)
{
	int	i;

	i = 0;
	if (c == 'c')
		i += ft_putchar(va_arg(args, int));
	else if (c == 's')
		i += ft_putstr(va_arg(args, char *));
	else if (c == 'p')
		i = 0;
	else if (c == 'd')
		i = 0;
	else if (c == 'i')
		i = 0;
	else if (c == 'u')
		i = 0;
	else if (c == 'x')
		i = 0;
	else if (c == 'X')
		i = 0;
	else if (c == '%')
		i = 0;
	return (i);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		len;

	va_start(args, str);
	while (str[i])
	{

	}
}

int	main(void)
{
	char s = 's';

	printf("%c \n", s);
	ft_printf("%c", s);
}
