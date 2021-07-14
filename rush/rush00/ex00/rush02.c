/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjallada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 19:58:13 by mjallada          #+#    #+#             */
/*   Updated: 2021/07/04 20:01:41 by mjallada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int imax, int jmax)
{
	int	i;
	int	j;

	j = 1;
	while (j <= jmax && imax != 0 && jmax != 0)
	{
		i = 1;
		while (i <= imax)
		{
			if ((i == 1 && j == 1) || (i == imax && j == 1))
				ft_putchar('A');
			else if (i > 1 && i < imax && (j == 1 || j == jmax))
				ft_putchar('B');
			else if (j > 1 && j < jmax && (i == 1 || i == imax))
				ft_putchar('B');
			else if ((i == 1 && j == jmax) || (i == imax && j == jmax))
				ft_putchar('C');
			else
				ft_putchar(' ');
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
