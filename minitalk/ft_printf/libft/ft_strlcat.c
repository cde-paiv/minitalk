/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-paiv <cde-paiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 09:18:28 by cde-paiv          #+#    #+#             */
/*   Updated: 2024/04/24 09:59:16 by cde-paiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dst_len >= size)
		return (size + src_len);
	i = dst_len;
	j = 0;
	while (src[j] && i < size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst_len + src_len);
}

/*int	main(void)
{
	char	dst[20] = "good";
	const char	src[] = "luck!";
	size_t	buffer_size = sizeof(dst);

	printf("antes da concatenacao: %s\n", dst);
	size_t	result = ft_strlcat(dst, src, buffer_size);
	printf("depois da concatenada %s\n", dst);
	printf("comprimento resultante %zu\n", result);
	return (0);
}*/
