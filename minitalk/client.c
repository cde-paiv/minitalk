/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-paiv <cde-paiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 19:55:04 by cde-paiv          #+#    #+#             */
/*   Updated: 2024/08/02 18:25:16 by cde-paiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf/ft_printf.h"

size_t	get_sleep(size_t size)
{
	if (size < 4000)
		return (50);
	else if (size < 10000)
		return (150);
	else if (size < 20000)
		return (200);
	else if (size < 60000)
		return (300);
	else if (size < 100000)
		return (500);
	else
		return (10000);
}

void	send_bit(int pid, char c, size_t len)
{
	int		shift;
	int		signal;

	shift = 0;
	while (shift < 8)
	{
		if (c & (1 << shift))
			signal = SIGUSR1;
		else
			signal = SIGUSR2;
		if (kill(pid, signal) == -1)
		{
			ft_printf("error send bits\n");
			exit(1);
		}
		usleep(get_sleep(len));
		shift++;
	}
}

int	main(int argc, char **argv)
{
	int		pid;
	size_t	i;

	if (argc != 3)
	{
		ft_printf("use: %s <pid> <string>\n", argv[0]);
		return (1);
	}
	pid = ft_atoi(argv[1]);
	if (pid <= 0)
	{
		ft_printf("invalid PID\n");
		return (1);
	}
	i = 0;
	while (argv[2][i] != '\0')
	{
		send_bit(pid, argv[2][i], ft_strlen(argv[2]));
		i++;
	}
	send_bit(pid, '\0', 1);
	return (0);
}
