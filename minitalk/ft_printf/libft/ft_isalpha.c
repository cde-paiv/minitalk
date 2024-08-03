/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-paiv <cde-paiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 09:13:58 by cde-paiv          #+#    #+#             */
/*   Updated: 2024/04/24 09:58:19 by cde-paiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
/*
int	main(void)
{
	char	c;

	printf("escreva qualquer caracter para ser verificado\n");
	scanf("%c", &c);
	if (ft_isalpha(c))
	{
		printf("%c e uma letra alfabetica.\n", c);
	}
	else
	{
		printf("%c nao e uma letra alfabetica.\n", c);
	}
	return (0);
}*/
