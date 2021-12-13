CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

FILES = ft_cat.c ft_error.c
INCS = includes/
SRC = src/

SRCS = ${addprefix ${SRC}, ${FILES}}
OBJS = ${SRCS:.c=.o}
BIN = ft_cat

.c.o: ${SRCS}
	${CC} ${CFLAGS} -c $< -I${INCS} -o ${<:.c=.o}

${BIN}: ${OBJS}
	${CC} ${CFLAGS} ${OBJS} src/main.c -I${INCS} -o ${BIN}

all: ${BIN}

clean:
	${RM} ${OBJS}

fclean : clean
	${RM} ${BIN}

.PHONY: all clean fclean .c.o
