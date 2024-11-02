/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfeufeu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 17:13:53 by hfeufeu           #+#    #+#             */
/*   Updated: 2024/11/02 17:26:08 by hfeufeu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int	printperc(void);
int	ft_putchar(char c);
int	select(char c, va_list args);
int	ft_printf(const char *str, ...);
int	ft_puthexa(unsigned int nb);
int	ft_putnbr(int nb);
int	ft_uputnbr(unsigned int nb);
int	ft_putstr(char *s);


#endif
