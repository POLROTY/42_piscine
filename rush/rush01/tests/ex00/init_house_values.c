
void	init_house_values(char *values, int tab[][6])
{
	tab[0][1] = values[0] - 48;
	tab[0][2] = values[1] - 48;
	tab[0][3] = values[2] - 48;
	tab[0][4] = values[3] - 48;
	tab[1][5] = values[4] - 48;
	tab[2][5] = values[5] - 48;
	tab[3][5] = values[6] - 48;
	tab[4][5] = values[7] - 48;
	tab[1][0] = values[8] - 48;
	tab[2][0] = values[9] - 48;
	tab[3][0] = values[10] - 48;
	tab[4][0] = values[11] - 48;
	tab[5][1] = values[12] - 48;
	tab[5][2] = values[13] - 48;
	tab[5][3] = values[14] - 48;
	tab[5][4] = values[15] - 48;
}
// need to change to even numbers when taking argv