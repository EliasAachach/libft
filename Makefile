# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elaachac <elaachac@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/07 11:52:20 by elaachac          #+#    #+#              #
#    Updated: 2019/11/22 12:11:29 by elaachac         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Werror -Wextra

SRCS =	./ft_memset.c\
		./ft_bzero.c\
		./ft_memcpy.c\
		./ft_memccpy.c\
		./ft_memmove.c\
		./ft_memchr.c\
		./ft_strlen.c\
		./ft_isalpha.c\
		./ft_isdigit.c\
		./ft_isalnum.c\
		./ft_isascii.c\
		./ft_isprint.c\
		./ft_toupper.c\
		./ft_tolower.c\
		./ft_strchr.c\
		./ft_strrchr.c\
		./ft_strncmp.c\
		./ft_strlcpy.c\
		./ft_strlcat.c\
		./ft_strnstr.c\
		./ft_atoi.c\
		./ft_calloc.c\
		./ft_strdup.c\
		./ft_substr.c\
		./ft_strjoin.c\
		./ft_strtrim.c\
		./ft_split.c\
		./ft_itoa.c\
		./ft_strmapi.c\
		./ft_putchar_fd.c\
		./ft_putstr_fd.c\
		./ft_putendl_fd.c\
		./ft_putnbr_fd.c\
		./ft_memcmp.c\

CC = gcc

AR = ar -rc

OBJ =		$(SRCS:.c=.o)

.c.o:		${SRCS}
			$(CC) $(FLAGS) -I./includes -c $< -o ${<:.c=.o}

.PHONY:		all clean re fclean

all:		$(NAME)

$(NAME):	$(OBJ)
			$(AR) $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
