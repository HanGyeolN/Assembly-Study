# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hna <hna@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/05 12:52:21 by hna               #+#    #+#              #
#    Updated: 2020/07/05 14:56:59 by hna              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = libasm.a
FLAGS = -f macho64

SRCS = ft_strlen.s	ft_strcpy.s

OBJS = $(SRCS:.s=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	ar -rc $(NAME) $^

%.o : %.s
	nasm $(FLAGS) $<

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

test : re
	$(CC) -o test test.c -L. -lasm
	./test
