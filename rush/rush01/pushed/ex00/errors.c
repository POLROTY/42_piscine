/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mportrai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 13:40:46 by mportrai          #+#    #+#             */
/*   Updated: 2021/07/11 17:57:13 by mportrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_error2(char **av, int i);

int	ft_error(int ac, char **av, int i)
{
	if (ac != 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	while (av[1][i] != '\0')
	{
		i++;
	}
	if (i != 31)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	i = 0;
	i = ft_error2(av, i);
	if (i == 1)
		return (1);
	else
		return (0);
}

int	ft_error2(char **av, int i)
{
	while (av[1][i] && i <= 31)
	{
		if ((av[1][i] < '1') || (av[1][i] > '4'))
		{
			write(1, "Error\n", 6);
			return (0);
		}
		if (av[1][i] == '4')
		{
			if (av[1][i + 8] != '1')
			{
				write(1, "Error\n", 6);
				return (0);
			}
		}
		i = i + 2;
	}
	i = 1;
	while (av[1][i] == ' ')
	{
		write(1, "Error\n", 6);
		return (0);
	}
	i += 2;
	return (1);
}
