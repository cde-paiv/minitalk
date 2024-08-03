/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unint_pf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-paiv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 17:13:33 by cde-paiv          #+#    #+#             */
/*   Updated: 2024/05/16 17:21:27 by cde-paiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unint_pf(unsigned int nbr)
{
	int	count;

	count = 0;
	if (nbr > 9)
		count += ft_unint_pf(nbr / 10);
	count += ft_putchar_pf((nbr % 10) + '0');
	return (count);
}
