/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpol <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 16:16:20 by rpol              #+#    #+#             */
/*   Updated: 2021/07/19 16:42:24 by rpol             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*cpy;

	cpy = malloc(sizeof(char) * (ft_strlen(src) + 1 ));
	if (!cpy)
		return (NULL);
	i = 0;
	while (src[i])
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*kayak;

	kayak = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (!kayak)
		return (NULL);
	kayak[ac].str = 0;
	i = 0;
	while (i < ac)
	{
		kayak[i].size = ft_strlen(av[i]);
		kayak[i].str = av[i];
		kayak[i].copy = ft_strdup(av[i]);
		i++;
	}
	return (kayak);
}
