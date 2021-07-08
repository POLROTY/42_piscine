/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpol <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 14:43:24 by rpol              #+#    #+#             */
/*   Updated: 2021/07/01 16:49:35 by rpol             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	c = c + 48;
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = 00;
	while (a <= 97)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar(a / 10);
			ft_putchar(a % 10);
			write(1, " ", 1);
			ft_putchar(b / 10);
			ft_putchar(b % 10);
			write(1, ", ", 2);
			b++;
		}
		a++;
	}
	write(1, "98 99", 5);
}
