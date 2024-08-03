/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-paiv <cde-paiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 09:18:56 by cde-paiv          #+#    #+#             */
/*   Updated: 2024/04/24 09:59:38 by cde-paiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		if (big[i] == little[j])
		{
			while (big[i + j] == little[j] && i + j < len)
			{
				if (little[j + 1] == '\0')
					return ((char *)big + i);
				j++;
			}
			j = 0;
		}
		i++;
	}
	return (0);
}

/*int	main(void)
{
	const char *big = "teste para procurar qualquer coisa da string";
	const char *little = "curar";
	size_t len = 50;
	char *result = ft_strnstr(big, little, len);

	if (result != NULL)
	{
		printf("string little encontrada em: %s\n", result);
	}
	else
	{
		printf("string little nao encontrada.\n");
	}
	return (0);
}*/
