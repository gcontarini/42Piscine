CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

FILES = ft_tail.c ft_straux.c ft_error.c
INCS = includes/
SRC = src/

SRCS = ${addprefix ${SRC}, ${FILES}}
OBJS = ${SRCS:.c=.o}
NAME = ft_tail

.c.o: ${SRCS}
	${CC} ${CFLAGS} -c $< -I${INCS} -o ${<:.c=.o}

${NAME}: ${OBJS}
	${CC} ${CFLAGS} ${OBJS} src/main.c -I${INCS} -o ${NAME}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${BIN}

re: fclean all

.PHONY: all clean fclean re .c.o
