/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-paiv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 17:28:23 by cde-paiv          #+#    #+#             */
/*   Updated: 2024/05/21 11:09:23 by cde-paiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_pf(int nb)
{
	int	count;

	count = 0;
	if (nb == -2147483648)
	{
		count += ft_putchar_pf('-');
		count += ft_putchar_pf('2');
		count += ft_putnbr_pf(147483648);
	}
	else if (nb < 0)
	{
		count += ft_putchar_pf('-');
		count += ft_putnbr_pf(-nb);
	}
	else if (nb > 9)
	{
		count += ft_putnbr_pf(nb / 10);
		count += ft_putnbr_pf(nb % 10);
	}
	else
		count += ft_putchar_pf(nb + '0');
	return (count);
}
