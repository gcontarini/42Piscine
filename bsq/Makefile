CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f

SRC		= ft_atoi.c ft_error.c ft_file.c ft_free.c ft_prints.c ft_straux.c get_lines.c get_map.c squares.c rules.c
INCS = includes
OBJS	= ${SRC:.c=.o}

NAME	= bsq

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I${INCS}

${NAME}: ${OBJS} main.c
	${CC} ${CFLAGS} ${OBJS} main.c -o ${NAME} -I${INCS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

all: ${NAME}

re: fclean all

.PHONY: all clean fclean re .c.o
