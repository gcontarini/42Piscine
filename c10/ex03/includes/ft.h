#ifndef FT_H
#define FT_H
#include <errno.h>
#include <fcntl.h>
#include <libgen.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include <stdio.h>

#define BUFF_SIZE 1000
#define LLEN 16

extern int errno;

typedef struct s_file
{
	char *str;
	char *curr;
	char *re;
	int total_size;
	int re_size;
}	t_file;

typedef struct s_line_buffer
{
	char	*last;
	char	*curr;
	int	last_size;
	int	curr_size;
	int	line;
	int	equal_flag;
}	t_buff;

typedef struct s_user_input_options
{
	int	print;
	int	fd;
}	t_opt;

// errors.c
t_file	*error_handler_file(int err, char *file);
t_file *set_errno_mem_file();
char	*set_errno_mem();
int	set_errno_mem_int();
int	set_err_invalid_option(char *arg);
// open.c
t_file	*open_full_file(char *file, int fd);
char	*append_data(char *p, char *buff, int rc, int size);
// straux.c
int	ft_strlen(char	*str);
int	ft_atoi(char *str);
int	ft_sizehex(int n);
// printhex.c
int	printhex(t_buff *buffer, t_file *file1, t_file *file2, int option);
int	print_remainder(t_buff *buffer, t_file **file2, t_opt opt);
int	pop_buff(t_buff *buffer, t_file *file1, t_file *file2);
int	pop_buff_re(t_buff *buffer, t_file *file2);
void	move_buff(t_buff *buffer);
void	print_when_equal(t_buff *buffer);
int	check_last_line(t_buff *buffer);
int	print_one_line(t_buff *buffer, int option);
void	print_nline(int line, int option, int linebreak);
void	printcontent(char *buff, int rc);
// puthex.c
void	printhex_char(unsigned char c);
void	ft_putnbrhex(int nbr, char *base);
void	ft_parse(int i);
// hexdump.c
void	set_remainder(t_file *file1, t_file *file2);
void	move_file_free_old(t_file **file1, t_file **file2);
void	init_vars(t_buff *buff, t_file **file1, t_file **file2);
void	hexdump(t_opt opt, char **av);
// hexdump_stdin.c
void	hexdump_stdin(t_opt opt);
int	read_stdin(int fd, t_buff *buffer, int line_size);
#endif
