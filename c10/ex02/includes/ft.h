#ifndef FT_H
#define FT_H
#include <errno.h>
#include <fcntl.h>
#include <libgen.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include <stdio.h>

typedef struct s_buffer
{
	char	*begin;
	char	*end;
}	t_buffer;

extern int errno;

char	*ft_memerror(void);
int	ft_memerror_int(void);
int	ft_illegal_option(char c);
int	ft_error_handler(int errnum, char *av);

int	ft_strlen(char *str);
char	*ft_append_dump(t_buffer *text, char *buff, int rc, int limit);
char	*ft_append(t_buffer *text, char *buff, int rc);
int	ft_atoi(char *str);

int	ft_readf_all(t_buffer *text, int fd, int lim);
char	**parse_input(int ac, char **av);
void	parse_options(int ac, char **av, int *fd, int *lim);
void	ft_print_free(t_buffer *text);
#endif
