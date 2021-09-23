#ifndef BSQ_H
# define BSQ_H
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>

int				*pos_bsq(int **tab, int size_y, int size_x);
void			ft_file(void);
int				dem(int left, int up, int upleft);
char			*re_alloc(char *str, int n);
int				ft_atoi(char *str);
int				bsq(char *argv);
int				**dem_map(int **tab, int size_y, int size_x);
char			**the_bsq(int **tab_i, char **tab_c, char c, int *pos);
int				check_num(char c);
int				size_x(char *argv);
int				get_size(char *str);
char			*params(char *argv);
char			*get_carac(char *str);
int				**ft_chartab_to_inttab(char **t, int y, int x, char *c);
char			**ft_read(int y, char *argv, int p_size);
char			**ft_split_whitespaces(char *str);
void			ft_print_words_tables(char **tab, int x);
void			ft_putchar(char c);
int				ft_strlen(char *str);
void			ft_putstr(char *str);
int				ft_errors(char **tab);

typedef struct s_bsq
{
	int	i;
	int	j;
	int	m;
	int	n;
	int	bigst1;
	int	bigst2;
	int	stat_bigst;
}				t_bsq;

typedef struct s_read
{
	int		x;
	int		size;
	int		fd;
	int		i;
	int		j;
	char	**buf;
	char	*str;
	char	b[5];
}				t_read;

typedef struct s_pos
{
	int		i[3];
	int		*pos;
}				t_pos;

#endif
