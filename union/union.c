/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 10:28:32 by egomes            #+#    #+#             */
/*   Updated: 2021/09/16 17:19:52 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int ac, char **av)
{
	int arr[256];
	int i;

	i = 0;
	while (i < 256)
		arr[i++] = 0;
	if (ac == 3)
	{
		while (*av[1])
		{
			if (!arr[(int)*av[1]])
			{
				arr[(int)*av[1]] = 1;
				write (1, av[1], 1);
			}
			av[1]++;
		}
		while (*av[2])
		{
			if (!arr[(int)*av[2]])
			{
				arr[(int)*av[2]] = 1;
				write (1, av[2], 1);
			}
			av[2]++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
