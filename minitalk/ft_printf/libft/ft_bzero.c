/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-paiv <cde-paiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 09:13:25 by cde-paiv          #+#    #+#             */
/*   Updated: 2024/04/24 09:58:10 by cde-paiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*int	main(void)
{
	char	str[20] = "good day!";
	printf("antes do bzero: %s\n", str);

	ft_bzero(str, 5);
	printf("depois do bzero: %s\n", str);
	return (0);
}*/
