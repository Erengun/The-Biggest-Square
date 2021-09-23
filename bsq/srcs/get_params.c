#include "bsq.h"

int	check_num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	*params(char *argv)
{
	int		i;
	int		fd;
	char	buf[1];
	char	*str;

	i = 0;
	str = malloc(100 * sizeof(char));
	if (str == NULL)
		exit(0);
	fd = open(argv, O_RDONLY);
	while (buf[0] != '\n')
	{
		if (read(fd, buf, 1) <= 0)
			return (0);
		if (i > 0 && buf[0] == 0)
			return (0);
		str[i] = buf[0];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int	get_size(char *str)
{
	int		i;
	int		n;
	char	*get;

	i = 0;
	n = 0;
	get = malloc(sizeof(char) * 10);
	if (get == NULL)
		exit(0);
	while (check_num(str[i]))
	{
		get[n] = str[i];
		n++;
		i++;
	}
	return (ft_atoi(get));
}

char	*get_carac(char *str)
{
	int		i;
	int		n;
	char	*get;

	i = 0;
	n = 0;
	get = malloc(sizeof(char) * 3);
	if (get == NULL)
		exit(0);
	while (str[i])
	{
		while (check_num(str[i]))
		{
			i++;
		}
		get[n] = str[i];
		n++;
		i++;
	}
	get[n] = '\0';
	return (get);
}
