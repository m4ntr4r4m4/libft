SRCS	=	 *.c

OBJS	=	${SRCS:.c=.o}

.c.o	: ${CC} $CFLAGS} -c $< -o ${<:.c=,o}

NAME	=	 libft.a

CFLAGS	=	-Wall -Werror -Wextra

CC	=	gcc

AR	=	ar cr

${NAME}	:	${OBJS} 
		${AR}  ${NAME} ${OBJS}
all	:	${name}

RM	=	rm -f

clean	:
		${RM} ${OBJS}

fclean	:	clean
		${RM} ${NAME}
