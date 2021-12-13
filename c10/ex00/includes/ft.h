#ifndef FT_H
#define FT_H
#include <unistd.h>
#include <fcntl.h>

int	ft_openf(char *file);
int	ft_read_printf(int fd);
int	ft_closef(int fd);
int	ft_error_handler(int error);

#endif
