# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile.old                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahammoud <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/05 13:04:56 by ahammoud          #+#    #+#              #
#    Updated: 2021/11/05 13:08:34 by ahammoud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	 ${wildcard *.c}

OBJS	=	${SRCS:.c=.o}

.c.o	:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

NAME	=	 libft.a

CFLAGS	=	-Wall -Werror -Wextra

CC	=	gcc

AR	=	ar rc

${NAME}	:	${OBJS} 
		${AR}  ${NAME} ${OBJS}

all	:	${NAME}

RM	=	rm -f

clean	:
		${RM} ${OBJS}

fclean	:	clean
			${RM} ${NAME}

re		:	fclean all

.PHONY	:	all clean fclean re
