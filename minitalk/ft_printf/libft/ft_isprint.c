/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-paiv <cde-paiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 09:15:16 by cde-paiv          #+#    #+#             */
/*   Updated: 2024/04/24 09:58:45 by cde-paiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*int	main(void)
{
	char	c;

	printf("escreva um caracter para ser verificado como caracter imprimivel\n");
	scanf("%c", &c);
	if (ft_isprint(c))
	{
		printf("%c e um caracter imprimivel\n", c);
	}
	else{
		return (c);
	}
}*/
