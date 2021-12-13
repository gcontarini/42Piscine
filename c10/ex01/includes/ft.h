#ifndef FT_H
#define FT_H
#include <errno.h>
#include <fcntl.h>
#include <libgen.h>
#include <string.h>
#include <unistd.h>

extern int errno;
int	ft_openf(char *file);
int	ft_read_printf(int fd);
int	ft_closef(int fd);
int	ft_error_handler(int errnum, char *av);

#endif
