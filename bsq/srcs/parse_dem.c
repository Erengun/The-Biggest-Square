#include "bsq.h"

int	*pos_bsq(int **tab, int size_y, int size_x)
{
	t_pos	posb;

	posb.i[0] = 0;
	posb.i[1] = 0;
	posb.i[2] = 0;
	posb.pos = malloc(sizeof(int) * 2);
	posb.pos[1] = 0;
	if (posb.pos == NULL)
		exit(0);
	while (posb.i[0] < size_y)
	{
		while (posb.i[1] < size_x)
		{
			if (tab[posb.i[0]][posb.i[1]] > posb.i[2])
			{
				posb.i[2] = tab[posb.i[0]][posb.i[1]];
				posb.pos[0] = posb.i[0];
				posb.pos[1] = posb.i[1];
			}
			posb.i[1]++;
		}
		posb.i[1] = 0;
		posb.i[0]++;
	}
	return (posb.pos);
}

char	**the_bsq(int **tab_i, char **tab_c, char c, int *pos)
{
	t_bsq	bsq;

	bsq.bigst1 = tab_i[pos[0]][pos[1]];
	bsq.bigst2 = bsq.bigst1;
	bsq.stat_bigst = bsq.bigst1;
	bsq.i = pos[0];
	bsq.j = pos[1];
	bsq.n = 0;
	bsq.m = 0;
	while (bsq.m < bsq.bigst1)
	{
		while (bsq.n < bsq.bigst1)
		{
			tab_c[bsq.i - bsq.m][bsq.j - bsq.n] = c;
			bsq.n++;
		}
		bsq.n = 0;
		bsq.m++;
	}
	return (tab_c);
}
