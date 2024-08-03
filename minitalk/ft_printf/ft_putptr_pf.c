/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-paiv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 11:02:19 by cde-paiv          #+#    #+#             */
/*   Updated: 2024/05/21 11:08:25 by cde-paiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr_pf(unsigned long nbr, char *base)
{
	int	count;

	if (nbr == 0)
		return (ft_putstr_pf("(nil)"));
	count = 0;
	count += ft_putstr_pf("0x");
	count += hexlong(nbr, base);
	return (count);
}

int	hexlong(unsigned long nbr, char *base)
{
	int	count;

	count = 0;
	if (nbr > 15)
		count += hexlong(nbr / 16, base);
	count += ft_putchar_pf(base[nbr % 16]);
	return (count);
}
