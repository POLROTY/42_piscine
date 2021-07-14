#include <unistd.h>

void	print_tab(int	tab[][6])
{
	int	i;
	int	j;
	int	nb;

	i = 0;
	j = 0;
	while (i < 6)
	{
		j = 0;
		while (j < 6)
		{
			nb = tab[i][j] + '0';
			write(1, &nb, 1);
			write(1, " ", 1);
			j++;
		}
		i++;
		write(1, "\n", 1);
	}
}
