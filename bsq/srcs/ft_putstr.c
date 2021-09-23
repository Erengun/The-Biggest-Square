#include "bsq.h"

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}
