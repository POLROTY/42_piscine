/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpol <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 00:13:00 by rpol              #+#    #+#             */
/*   Updated: 2021/07/20 18:00:20 by rpol             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	check_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	check_num_of_words(char *str, char *charset)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (str[i])
	{
		if (check_charset(str[i], charset) == 1)
		{
			num++;
			while (str[i] && check_charset(str[i], charset) == 1)
				i++;
		}
		else
			i++;
	}
	return (num);
}

char	*segment(char *str, int size_of_word, int *pos)
{
	int		i;
	char	*kayak2;

	kayak2 = malloc(sizeof(char) * (size_of_word + 1));
	if (!kayak2)
		return (NULL);
	i = 0;
	while (i < size_of_word)
	{
		kayak2[i] = str[*pos];
		i++;
		*pos = *pos + 1;
	}
	kayak2[i] = '\0';
	return (kayak2);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		siz;
	int		line;
	char	**kayak;

	kayak = malloc(sizeof(char *) * (check_num_of_words(str, charset) + 1));
	if (!kayak)
		return (NULL);
	kayak[check_num_of_words(str, charset)] = NULL;
	i = 0;
	line = 0;
	while (str[i])
	{
		if (check_charset(str[i], charset) == 1)
		{
			siz = 0;
			while (str[i + siz] && check_charset(str[i + siz], charset) == 1)
				siz++;
			kayak[line] = segment(str, siz, &i);
			line++;
		}
		else
			i++;
	}
	return (kayak);
}
