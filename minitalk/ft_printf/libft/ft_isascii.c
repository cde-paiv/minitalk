/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-paiv <cde-paiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 09:14:54 by cde-paiv          #+#    #+#             */
/*   Updated: 2024/04/24 09:58:50 by cde-paiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*int	main(void)
{
	char	c;

	printf("escreva um caracter para ser verificado no intervalo ASCII\n");
	scanf("%c", &c);
	if (ft_isascii(c))
	{
		printf("%c esta no intervalo da tabela ASCII\n", c);
	}
	else
	{
		printf("%c esta fora do intervalo da tabela ASCII\n", c);
	}
}*/
