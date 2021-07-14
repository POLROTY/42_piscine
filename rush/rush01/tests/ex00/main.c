#include <unistd>

init_house_values(char *house_values, int **tab);
ft_fill(int **tab, int col);
print_tab(int **tab);

int	main(void)
{

    int tab[6][6];
    int j;
    int i;

    i = 0;
    j = 0;

    while (i <= 6)
    {
        while (j <= 6)
        {
            tab[i][j] = 0;
            j++;
        }
        i++;
    }

	char	*house_values = "4321122243211222"; // test before taking argv

	init_house_values(house_values, tab);
	ft_fill(tab, 1);
	write(1, "\n", 1);
	print_tab(tab);
}
