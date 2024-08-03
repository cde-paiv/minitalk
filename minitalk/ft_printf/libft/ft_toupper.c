/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-paiv <cde-paiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 09:19:17 by cde-paiv          #+#    #+#             */
/*   Updated: 2024/04/24 09:59:44 by cde-paiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
	}
	return (c);
}

/*int	main(void)
{
	char	input = 'b';
        char	output = ft_toupper(input);

	printf("caracter de entrada: %c\n", input);
	printf("caracter de saida: %c\n", output);
	return (0);
}*/
