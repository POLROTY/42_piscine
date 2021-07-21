/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpol <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 03:07:46 by rpol              #+#    #+#             */
/*   Updated: 2021/07/20 18:05:11 by rpol             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (dest[size])
	{
		size++;
	}
	while (src[i])
	{
		dest[size + i] = src[i];
		i++;
	}
	dest[size + i] = '\0';
	return (dest);
}

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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		all_size;
	int		size_sep;
	int		j;
	char	*tab;

	j = -1;
	all_size = 0;
	size_sep = ft_strlen(sep);
	while (++j < size)
		all_size += ft_strlen(strs[j]);
	tab = malloc(sizeof(char) * (all_size + 1 + (size_sep * (size - 1))));
	if (!tab)
		return (0);
	j = 0;
	tab[0] = '\0';
	while (j < size)
	{
		tab = ft_strcat(tab, strs[j]);
		if (j < size - 1)
			tab = ft_strcat(tab, sep);
		j++;
	}
	return (tab);
}
/*
#include <stdio>

int	main(int argc, char **argv)
{
	printf("./ex03/output___said___this___is___a___success :\n");
	printf("%s\n", ft_strjoin(argc, argv, "___"));
}*/
