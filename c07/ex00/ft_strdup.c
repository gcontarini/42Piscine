#include <stdlib.h>

char    *ft_strdup(char *str)
{
    char    *ptr;
    int     i;

    i = 0;
    while (str[i])
        i++;
    ptr = malloc((i + 1) * sizeof(char));
    if (!ptr)
        return (0);
    while (*str)
        *ptr++ = *str++;
    *ptr = 0;
    return (ptr - i);
}
