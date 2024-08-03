/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-paiv <cde-paiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 09:17:16 by cde-paiv          #+#    #+#             */
/*   Updated: 2024/04/24 09:59:03 by cde-paiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;

	str = s;
	if (n == 0)
		return (s);
	while (n > 0)
	{
		str[n -1] = c;
		n--;
	}
	return (s);
}

/*int	main(void)
{
	char	array[10];
	memset(array, '+', sizeof(array));
	printf("Array preenchido: %s\n", array);
	return 0;
}*/
