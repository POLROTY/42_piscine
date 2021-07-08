/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpol <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 15:07:02 by rpol              #+#    #+#             */
/*   Updated: 2021/07/03 15:28:11 by rpol             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	i ;
	int	j ;
	int	k ;

	i = 0 ;
	while (i < 7)
	{
		j = i + 1 ;
		while (j <= 8)
		{
			k = j + 1 ;
			while (k <= 9)
			{
				ft_putchar(i + '0');
				ft_putchar(j + '0');
				ft_putchar(k + '0');
				write(1, ", ", 2);
				k++ ;
			}
			j++ ;
		}
		i++ ;
	}
	write(1, "789", 3);
}
