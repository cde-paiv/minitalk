/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-paiv <cde-paiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 09:15:34 by cde-paiv          #+#    #+#             */
/*   Updated: 2024/04/24 09:58:53 by cde-paiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			return ((unsigned char *)s + i);
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	char *str = "testing function!";
	int char_find = 'i';
	char *result = ft_memchr(str, char_find, 5);

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
