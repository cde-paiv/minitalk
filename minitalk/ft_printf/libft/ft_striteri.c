/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-paiv <cde-paiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 17:32:14 by cde-paiv          #+#    #+#             */
/*   Updated: 2024/04/29 17:54:07 by cde-paiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
}

/*void make_uppercase(unsigned int i, char *c) {
    if (c) {
        *c = toupper((unsigned char)*c);
    }
}

int	main(void)
{
    char str[] = "hello, world!";
    
    printf("Original string: %s\n", str);
    
    ft_striteri(str, make_uppercase);
    
    printf("Modified string: %s\n", str);
    
    return 0;
}*/
