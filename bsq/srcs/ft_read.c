#include "bsq.h"

int	size_x(char *argv)
{
	int		i;
	int		o;
	int		fd;
	char	buf[1];

	i = 0;
	o = 0;
	fd = open(argv, O_RDONLY);
	while (o != 2)
	{
		if (read(fd, buf, 1) <= 0)
			return (0);
		if (buf[0] == '\n')
			o++;
		if (o == 1)
		{
			i++;
		}
	}
	close(fd);
	return (i - 1);
}

t_read	ft_bsq_edit(void)
{
	t_read	bsq;

	bsq.size = 0;
	bsq.j = 0;
	bsq.i = 0;
	return (bsq);
}

char	**ft_read(int y, char *argv, int p_size)
{
	t_read	bsq;

	if (y == 0)
		return (0);
	bsq = ft_bsq_edit();
	bsq.x = size_x(argv);
	bsq.buf = malloc(y * sizeof(char *) + 1);
	if (bsq.buf == NULL)
		exit (0);
	bsq.fd = open(argv, O_RDONLY);
	read(bsq.fd, bsq.buf, p_size);
	bsq.buf[0] = malloc(bsq.x * sizeof(char));
	while (read(bsq.fd, bsq.buf[bsq.i], bsq.x) > 0)
	{
		bsq.i++;
		read(bsq.fd, bsq.b, 1);
		if (bsq.b[0] != '\n' || bsq.i > y)
			return (0);
		bsq.buf[bsq.i] = malloc(bsq.x * sizeof(char));
	}
	if (bsq.i != y)
		return (0);
	bsq.buf[bsq.i] = 0;
	close(bsq.fd);
	return (bsq.buf);
}
