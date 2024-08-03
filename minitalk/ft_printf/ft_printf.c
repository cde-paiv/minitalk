/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-paiv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:29:27 by cde-paiv          #+#    #+#             */
/*   Updated: 2024/05/22 08:45:44 by cde-paiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	format_printf(char mask, va_list ap)
{
	int	count;

	count = 0;
	if (mask == 'c')
		count += ft_putchar_pf(va_arg(ap, int));
	else if (mask == 's')
		count += ft_putstr_pf(va_arg(ap, char *));
	else if (mask == '%')
		count += write(1, "%", 1);
	else if (mask == 'd' || mask == 'i')
		count += ft_putnbr_pf(va_arg(ap, int));
	else if (mask == 'u')
		count += ft_unint_pf(va_arg(ap, unsigned int));
	else if (mask == 'X' || mask == 'x')
		count += ft_hexa_pf(va_arg(ap, unsigned int), mask);
	else if (mask == 'p')
		count += ft_putptr_pf(va_arg(ap, unsigned long), LOWER_HEX);
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	vf;
	int		count;

	va_start(vf, str);
	count = 0;
	if (str == NULL)
		return (-1);
	while (*str)
	{
		if (*str == '%')
		{
			++str;
			count += format_printf(*str, vf);
		}
		else
		{
			count += write(1, str, 1);
		}
		++str;
	}
	va_end(vf);
	return (count);
}
