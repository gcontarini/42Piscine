#include "ft.h"
#define BUFF_SIZE 1000000

char	*ft_read_file(char *file_name, char **file, int option)
{
	char	bff[BUFF_SIZE + 1];
	char	*tmp;
	int		rc;

	if (option == 3)
		if (open(file_name, O_RDONLY) < 0)
			return (0);
	*file = ft_strcat("", "", 1);
	if (*file == 0)
		return (0);
	rc = read(option, bff, BUFF_SIZE);
	while (rc > 0)
	{
		bff[rc] = 0;
		tmp = *file;
		*file = ft_strcat(*file, bff, rc);
		if (*file == 0)
			return (0);
		rc = read(option, bff, BUFF_SIZE);
		free(tmp);
	}
	if (option == 3)
		if (close(3) < 0)
			return (0);
	return (*file);
}
