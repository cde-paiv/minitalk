/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-paiv <cde-paiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:21:22 by cde-paiv          #+#    #+#             */
/*   Updated: 2024/08/02 00:10:17 by cde-paiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <signal.h>
# include "libft/libft.h"

# define UPPER_HEX "0123456789ABCDEF"
# define LOWER_HEX "0123456789abcdef"

int	ft_printf(const char *str, ...);
int	ft_putchar_pf(char c);
int	ft_putstr_pf(char *s);
int	format_printf(char mask, va_list ap);
int	ft_putnbr_pf(int nbr);
int	ft_unint_pf(unsigned int nbr);
int	ft_hexa_pf(unsigned long n, char format);
int	ft_putptr_pf(unsigned long nbr, char *base);
int	hexlong(unsigned long nbr, char *base);

#endif
