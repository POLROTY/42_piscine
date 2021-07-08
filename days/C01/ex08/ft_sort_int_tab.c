/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpol <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 15:21:36 by rpol              #+#    #+#             */
/*   Updated: 2021/07/04 16:18:52 by rpol             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	n;
	int	swp;

	n = 0 ;
	i = n + 1 ;
	while (n < size - 1)
	{
		if (tab[i] < tab[n])
		{
			swp = tab[i];
			tab[i] = tab[n];
			tab[n] = swp;
			n = 0 ;
			i = n + 1 ;
		}
		else
		{
			n++ ;
			i = n + 1;
		}
	}
}
