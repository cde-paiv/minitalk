/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-paiv <cde-paiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 09:19:11 by cde-paiv          #+#    #+#             */
/*   Updated: 2024/04/24 09:59:42 by cde-paiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c += 32;
	}
	return (c);
}

/*int	main(void)
{
	char	input = 'H';
	char	output = ft_tolower(input);

	printf("caracter de entrada: %c\n", input);
	printf("caracter de saida: %c\n", output);
	return (0);
}*/
