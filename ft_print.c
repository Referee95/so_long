/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhalil- <ykhalil-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 02:43:05 by ykhalil-          #+#    #+#             */
/*   Updated: 2023/04/14 05:28:50 by ykhalil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (ft_putstr("(null)"));
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}

static int	ft_count(long int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n)
	{
		i++;
		n /= 10;
	}
	return (i);
}

int	ft_putnbr(long int n)
{
	int	count;

	count = ft_count(n);
	if (n < 0)
	{
		n *= -1;
		ft_putchar('-');
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + 48);
	}
	else
	{
		ft_putchar(n + 48);
	}
	return (count);
}

static int	type(const char *str, va_list arg)
{
	int	i;

	i = 0;
	if (*str == 'c')
		i = ft_putchar(va_arg(arg, int));
	else if (*str == 's')
		i = ft_putstr(va_arg(arg, char *));
	else if (*str == 'd' || *str == 'i')
		i = ft_putnbr(va_arg(arg, int));
	else if (*str == '%')
		i = ft_putchar('%');
	return (i);
}

int	ft_printf(const char *s, ...)
{
	va_list	arg;
	int		y;

	va_start(arg, s);
	y = 0;
	while (*s)
	{
		if (*s == '%')
		{
			s++;
			y += type(s, arg);
			s++;
		}
		else
		{
			y += ft_putchar(*s);
			s++;
		}
	}
	va_end(arg);
	return (y);
}
