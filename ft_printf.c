/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfeufeu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:43:56 by hfeufeu           #+#    #+#             */
/*   Updated: 2024/11/02 17:58:16 by hfeufeu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	printperc(void)
{
	write(1, "%", 1);
	return (1);
}

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	select(char c, va_list args)
{
	int	li;

	li = 0;
	if (c == 'c')
		li = ft_putchar(va_arg(args, int));
	else if (c == 's')
		li = ft_putstr(va_arg(args, char *));
	//else if (c == 'p')
	//	li = ft_pointprint();
	else if (c == 'd')
		li = ft_putnbr(va_arg(args, int));
	else if (c == 'i')
		li = ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		li = ft_uputnbr(va_arg(args, unsigned int));
	else if (c == 'x')
		li = ft_puthexa(va_arg(args, unsigned int));
	else if (c == 'X')
		li = ft_puthexa(va_arg(args, unsigned int));
	else if (c == '%')
		li = printperc();
	return (li);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		size;

	size = 0;
	i = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i]  == '%')
		{
			size = select(str[i + 1], args);
			i += size;
		}
		write(1, &str[i], 1);
		i++;
		size++;
	}
	va_end(args);
	return (size);
}

int	main(void)
{
	int	i;
	int	j;
	//int s = 9;

	i = 0;
	j = 0;
	i = printf("%i, %d:  ", 56, 123);
	printf("%d \n", i);

	j = ft_printf("%i, %d:  ", 56, 123);
	printf("%d \n", j);
}
