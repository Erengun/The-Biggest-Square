#include "bsq.h"

void	ft_print_words_tables(char **tab, int x)
{
	int	i;

	i = 0;
	while (tab[i] != 0)
	{
		write(1, tab[i], x);
		ft_putchar('\n');
		i++;
	}
}
