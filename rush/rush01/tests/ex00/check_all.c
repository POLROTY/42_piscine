
int	free_row(int	num_test, int	tab[6][6], int	ligne)
{
	int	col;

	col = 1;
	while (col < 5)
	{
		if (tab[ligne][col] == num_test)
			return (0);
		col++;
	}
	return (1);
}

int	free_col(int	num_test, int	tab[6][6], int	col)
{
	int	ligne;

	ligne = 1;
	while (ligne < 5)
	{
		if (tab[ligne][col] == num_test)
			return (0);
		ligne++;
	}
	return (1);
}

int	free_case(int	num_test, int	tab[6][6], int	ligne, int	col)
{
	if (free_col(num_test, tab, col) == 1 && free_row(num_test, tab, ligne) == 1)
		return (1);
	return (0);
}

int	check_right(int	tab[][6], int	ligne)
{
	int	max;
	int	view;
	int	col;
	int	home_col;

	max = 0;
	view = 0;
	col = 1;
	home_col = tab[ligne][0];
	while (col <= 4)
	{
		if (tab[ligne][col] >= max)
		{
			max = tab[ligne][col];
			view++;
		}
		col++;
	}
	if (view <= home_col)
		return (1);
	return (0);
}

int	check_left(int	tab[][6], int	ligne)
{
	int	max;
	int	view;
	int	col;

	max = 0;
	view = 0;
	col = 4;
	while (col == 4)
	{
		if (tab[ligne][5] >= max)
		{
			max = tab[ligne][col];
			view++;
		}
		col--;
	}
	if (view <= tab[ligne][5])
		return (1);
	return (0);
}

int	check_down(int	tab[][6], int	col)
{
	int	max;
	int	view;
	int	ligne;

	max = 0;
	view = 0;
	ligne = 1;
	while (ligne <= 4)
	{
		if (tab[ligne][col] >= max)
		{
			max = tab[ligne][col];
			view++;
		}
		ligne++;
	}
	if (tab[0][col] <= view)
		return (1);
	return (0);
}

int	check_up(int	tab[][6], int	col)
{
	int	max;
	int	view;
	int	ligne;

	max = 1;
	view = 0;
	ligne = 4;
	view = 1;
	max = tab[--ligne][col];
	while (ligne >= 1)
	{
		if (tab[ligne][col] > max)
		{
			max = tab[ligne][col];
			view++;
		}
		ligne--;
	}
	if (tab[5][col] <= view)
		return (1);
	return (0);
}

int	check_all(int	tab[][6], int	ligne, int	col)
{
	col = 0;
	if (check_right(tab, ligne))
		return (1);
	return (0);
}
