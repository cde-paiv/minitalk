/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-paiv <cde-paiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 20:57:55 by cde-paiv          #+#    #+#             */
/*   Updated: 2024/08/02 16:22:32 by cde-paiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *s1, char c)
{
	int		size;
	int		j;
	char	*str;

	if (s1)
		size = ft_strlen(s1);
	else
		size = 0;
	str = (char *)malloc(sizeof(char) * (size + 2));
	if (str == NULL)
		return (NULL);
	j = 0;
	while (s1 && s1[j])
	{
		str[j] = s1[j];
		j++;
	}
	str[j++] = c;
	str[j] = '\0';
	free(s1);
	return (str);
}

/*#include <stdlib.h>

int main()
{
    char const *s1 = "Hello, ";
    char const *s2 = "world!";
    char *result;

    result = ft_strjoin(s1, s2);

    printf("Resultado: %s\n", result);
    free(result);
    return 0;
}*/
