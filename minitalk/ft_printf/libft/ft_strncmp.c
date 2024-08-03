/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-paiv <cde-paiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 09:18:49 by cde-paiv          #+#    #+#             */
/*   Updated: 2024/04/24 09:59:36 by cde-paiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 != '\0' && *s1 == *s2 && n > 0)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

/*int	main(void)
{
	const char	*str1 = "abcdefgh";
	const char	*str2 = "abcdwxyz";
	const char	*str3 = "hell";
	const char	*str4 = "hella";

	int	result1 = ft_strncmp(str1, str2, 5);
	printf("comparacao 1: %d\n", result1);
	int	result2 = ft_strncmp(str2, str4, 5);
	printf("comparacao 2: %d\n", result2);
	int	result3 = ft_strncmp(str3, str2, 4);
	printf("comparacao 3: %d\n", result3);

	return (0);
}*/
