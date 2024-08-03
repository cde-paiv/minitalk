/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-paiv <cde-paiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 09:13:43 by cde-paiv          #+#    #+#             */
/*   Updated: 2024/04/24 09:58:15 by cde-paiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

/*int	main(void)
{
	char	c;

	printf("escreva um caracter ou um digito para ser vefificado\n");
	scanf("%c", &c);
	if (ft_isalnum(c))
	{
		printf("%c e um caracter alfabetico ou um digito numerico.\n", c);
	}
	else
	{
		printf("%c nao e um caracter alfabetico ou um digito numerico\n", c);
	}
}*/
