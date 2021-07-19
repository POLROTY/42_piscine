/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpol <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 04:08:29 by rpol              #+#    #+#             */
/*   Updated: 2021/07/14 02:01:01 by rpol             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_sort_char_tab(int ac, char **av)
{
	int		i;
	int		n;
	char	*swp;

	n = 1 ;
	i = n + 1 ;
	while (i < ac)
	{
		if (ft_strcmp(av[i], av[n]) < 0)
		{
			swp = av[i];
			av[i] = av[n];
			av[n] = swp;
			n = 1 ;
			i = n + 1 ;
		}
		else
		{
			n++ ;
			i = n + 1;
		}
	}
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	j = 0;
	if (ac > 1)
	{
		ft_sort_char_tab(ac, av);
		while (++j < ac)
		{
			i = -1;
			while (av[j][++i])
				write(1, &av[j][i], 1);
			write(1, "\n", 1);
		}
	}
	return (0);
}
