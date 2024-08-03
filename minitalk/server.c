/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-paiv <cde-paiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 19:54:49 by cde-paiv          #+#    #+#             */
/*   Updated: 2024/08/02 17:58:03 by cde-paiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf/ft_printf.h"

void	bit_handler(int sig)
{
	static int	bit;
	static int	i;
	static char	*str;
	char		*temp;

	if (!str)
		str = ft_calloc(1, 1);
	if (sig == SIGUSR1)
		i |= (1 << bit);
	bit++;
	if (bit == 8)
	{
		temp = ft_strjoin(str, (char)i);
		str = temp;
		if (i == 0)
		{
			ft_printf("%s\n", str);
			free(str);
			str = NULL;
		}
		bit = 0;
		i = 0;
	}
}

int	main(int argc, char **argv)
{
	int	pid;

	(void)argv;
	if (argc != 1)
		return (1);
	pid = getpid();
	ft_printf("\n                          Welcome To Mota Server\n\n");
	ft_printf("Server PID is: %d \n", pid);
	while (1)
	{
		signal(SIGUSR1, bit_handler);
		signal(SIGUSR2, bit_handler);
		pause();
	}
	return (0);
}
