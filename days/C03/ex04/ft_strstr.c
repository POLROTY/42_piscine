/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpol <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 12:45:50 by rpol              #+#    #+#             */
/*   Updated: 2021/07/11 23:34:35 by rpol             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	size = 0;
	j = 0;
	while (to_find[size])
		size++;
	if (size == 0)
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[j])
		{
			j++;
			if (to_find[j] == '\0' && j == size)
				return (&str[i - (size - 1)]);
		}
		else
			j = 0;
		i++;
	}
	return (0);
}
