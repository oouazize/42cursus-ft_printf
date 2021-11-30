# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oouazize <oouazize@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/15 20:20:26 by oouazize          #+#    #+#              #
#    Updated: 2021/11/27 18:30:15 by oouazize         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	get_next_line.a

SRCS	=	get_next_line.c get_next_line_utils.c

OBJS	=	$(SRCS:.c=.o)

CFLAGS	=	-Wall -Wextra -Werror

LIB	=	ar -rcs

RM	=	rm -f

all:	$(NAME)

$(NAME):	$(OBJS)
	$(LIB) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all
