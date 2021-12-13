SRCS="ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c"
OBJS="ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o"

gcc -Wall -Wextra -Werror -c $SRCS
ar rcs libft.a $OBJS
rm $OBJS
