/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-paiv <cde-paiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 09:18:19 by cde-paiv          #+#    #+#             */
/*   Updated: 2024/04/24 09:59:13 by cde-paiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	char_c;

	char_c = (unsigned char)c;
	while (*s)
	{
		if ((unsigned char)*s == char_c)
			return ((char *)s);
		s++;
	}
	if (char_c == '\0')
		return ((char *)s);
	return (0);
}

/*int	main(void)
{
	const char *str = "testing function!";
	int char_find = 'i';
	char *result = ft_strchr(str, char_find);

	if (result != NULL)
	{
		printf("o caracter '%c' encontrado na string '%s'\n", char_find, result);
	}
	else
	{
		printf("o caracter '%c' nao foi encontrado na string\n", char_find);
	}
	return (0);
}*/
