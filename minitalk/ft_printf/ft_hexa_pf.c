/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_pf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-paiv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 18:44:13 by cde-paiv          #+#    #+#             */
/*   Updated: 2024/05/21 11:05:14 by cde-paiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa_pf(unsigned long n, char format)
{
	char				*base;
	int					i;
	unsigned int		num;
	unsigned int		len;

	if (format == 'x')
		base = "0123456789abcdef";
	else if (format == 'X')
		base = "0123456789ABCDEF";
	i = 0;
	num = (unsigned int)n;
	len = ft_strlen(base);
	if (num > (len - 1))
		i += ft_hexa_pf(num / len, format);
	i += ft_putchar_pf(*(base + (num % len)));
	return (i);
}

/*int	main(void)
{
	unsigned long number;

	number = 255;
	ft_hexa_pf(number, 'x');

	number = 1234;
	ft_hexa_pf(number, 'X');

	return (0);
}*/
