/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-paiv <cde-paiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 09:15:04 by cde-paiv          #+#    #+#             */
/*   Updated: 2024/04/24 09:58:52 by cde-paiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*int	main(void)
{
	char	c;

	printf("escreva qualquer digito para ser verificado\n");
	scanf("%c", &c);
	if (ft_isdigit(c))
	{
		printf("%c e um digito.\n", c);
	}
	else
	{
		printf("%c nao e uma um digito.\n", c);
	}
}*/
