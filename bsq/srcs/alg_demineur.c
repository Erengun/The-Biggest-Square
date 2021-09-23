#include "bsq.h"

int	dem(int left, int up, int upleft)
{
	if (left <= up && left <= upleft)
		return (left + 1);
	if (upleft <= up && upleft <= left)
		return (upleft + 1);
	if (up <= upleft && up <= left)
		return (up + 1);
	return (0);
}

int	**ft_chartab_to_inttab(char **tab, int size_y, int size_x, char *carac)
{
	int	i[2];
	int	**ret;

	i[0] = 0;
	ret = malloc(sizeof(int *) * size_y);
	if (ret == NULL)
		exit(0);
	while (i[0] < size_y)
	{
		i[1] = 0;
		ret[i[0]] = malloc(sizeof(int) * size_x);
		while (i[1] < size_x)
		{
			if (tab[i[0]][i[1]] != carac[0] && tab[i[0]][i[1]] != carac[1]
			&& tab[i[0]][i[1]] != carac[2])
				return (0);
			if (tab[i[0]][i[1]] == carac[1])
				ret[i[0]][i[1]] = 0;
			else
				ret[i[0]][i[1]] = 1;
			i[1]++;
		}
		i[0]++;
	}
	return (ret);
}

int	**dem_map(int **tab, int size_y, int size_x)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (i < size_y)
	{
		while (j < size_x)
		{
			if (tab[i][j] != 0)
				tab[i][j] = dem(tab[i - 1][j],
						tab[i][j - 1], tab[i - 1][j - 1]);
			j++;
		}
		j = 1;
		i++;
	}
	return (tab);
}
