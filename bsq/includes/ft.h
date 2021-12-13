#ifndef FT_H
# define FT_H
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct file_header
{
	int		lines;
	int		cols;
	char	emp;
	char	ob;
	char	dw;
}	t_fheader;

typedef struct square
{
	int	x;
	int	y;
	int	size;
}	t_sqr;

char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strcat(char *dest, char *src, int nb);

int		ft_atoi(char *str);
int		nline_len(char *file_name, int n);
int		read_nline(char *file_name, char *buff, int len, int n);
int		check_params(char *bff, t_fheader fh, int len);
int		read_first_line(char *bff, t_fheader *fh, int len);

char	**get_char_mtx(char ***mtx, t_fheader fh);
int		**get_int_mtx(int ***mtx, t_fheader fh);
int		open_mtx_map(char ***mtx, char *bff);
int		fill_mtx(int ***imtx, char ***cmtx, t_fheader fh);

void	ft_free_mtx(void ***mtx, t_fheader fh);

void	print_mtx(int **mtx, t_fheader fh);
void	print_mtx_char(char **mtx, t_fheader fh);

int		find_sqrs(int **matrix, int i, int j);
void	is_max(int i, int j, int **matrix, t_sqr *sq);
int		exception_sqr(int **matrix, t_sqr *sq, int i);
int		change_sqr(int **matrix, t_fheader fh, t_sqr *sq, int i);
int		mark_square(char ***cmtx, t_fheader fh, t_sqr sq);

char	*ft_read_file(char *file_name, char **file, int option);

int		program_call(char *bff);
int		program(char *bff, t_fheader *fh, t_sqr *sq);

int		handler(int type);

int	check_char(char *buf, t_fheader fh);
int	lines_len(char *buf, int i, int j, t_fheader fh);
int	first_line(char *buf, t_fheader *fh);
int	check_input(char *map_name, char *buf);
#endif
