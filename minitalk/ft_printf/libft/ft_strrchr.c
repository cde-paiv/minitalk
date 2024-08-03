/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-paiv <cde-paiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 09:19:03 by cde-paiv          #+#    #+#             */
/*   Updated: 2024/04/24 09:59:40 by cde-paiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int						i;
	unsigned char			char_c;

	char_c = (unsigned char)c;
	i = ft_strlen(s);
	if (char_c == 0)
		return ((char *)s + i);
	while (i >= 0)
	{
		if (s[i] == char_c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}

/*int	main(void)
{
	const char *str = "hello guys!";
	int charr = 'l';
	char *result;

	result = ft_strrchr(str, charr);

	if (result != NULL)
	{
		printf(" '%i' em '%s' esta em '%ld'\n", charr, str, result - str);
	}
	else
	{
		printf("'%i' nao encontradp em '%s'\n", charr, str);
	}
	return (0);
}*/
