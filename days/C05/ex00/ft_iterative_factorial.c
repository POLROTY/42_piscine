/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpol <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 17:30:31 by rpol              #+#    #+#             */
/*   Updated: 2021/07/12 23:14:58 by rpol             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	solution;

	i = 0;
	solution = nb;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (++i < nb)
		solution *= i;
	return (solution);
}
