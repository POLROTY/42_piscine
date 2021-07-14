/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbourbon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 15:54:07 by cbourbon          #+#    #+#             */
/*   Updated: 2021/07/11 17:57:05 by mportrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_error(int ac, char **av, int i);

int	ft_tab_init(char **av, int i);

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	i = ft_error(ac, av, i);
	ft_tab_init(av, i);
	return (0);
}
