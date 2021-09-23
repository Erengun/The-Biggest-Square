#include "bsq.h"

void	ft_file(void)
{
	int		r;
	int		fd;
	char	buf[4096];

	fd = open("abc", O_CREAT | O_RDWR | O_TRUNC, S_IWUSR | S_IRUSR);
	r = read(0, buf, 4096);
	while (r > 0)
		write(fd, buf, r);
	close(fd);
}
