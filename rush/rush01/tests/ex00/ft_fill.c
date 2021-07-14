int	free_case(int	num_test, int	**tab, int	ligne, int	col);
int	check_all(int	tab[][6], int	ligne, int	col);

void	ft_fill(int	tab[][6], int	col)
{
	int	num_test;
	int	ligne;

	ligne = 1;
	if (col == 5)
		return ;
	while (ligne < 5)
	{
		num_test = 1;
		while (num_test < 5)
		{
			if (free_case(num_test, tab, ligne, col) && check_all(tab, ligne, col))
				break ;
			num_test++;
		}
		if (num_test < 5)
		{
			tab[ligne][col] = num_test;
			ft_fill(tab, col + 1);
		}
		ligne++;
	}
}
