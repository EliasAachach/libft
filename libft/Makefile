# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elaachac <elaachac@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/07 11:52:20 by elaachac          #+#    #+#              #
#    Updated: 2019/11/07 11:52:24 by elaachac         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = libft.a
CC      = gcc
FLAGS    = -Wall -Wextra -Werror
BINDIR  = /usr/bin
SRCDIR    = srcs
INCDIR    = includes
STDSRCS = ft_atoi.c ft_isalnum.c ft_isdigit.c ft_memchr.c ft_memmove.c \
      ft_strdup.c ft_strlen.c ft_tolower.c ft_bzero.c ft_isalpha.c \
      ft_isprint.c ft_memcmp.c ft_memset.c ft_strlcat.c ft_strncmp.c \
      ft_toupper.c ft_calloc.c ft_isascii.c ft_memccpy.c ft_memcpy.c \
      ft_strchr.c ft_strlcpy.c ft_strnstr.c
BNSSRCS = ft_lstadd_back_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c \
      ft_lstmap_bonus.c ft_lstsize_bonus.c ft_lstadd_front_bonus.c \
      ft_lstdelone_bonus.c ft_lstlast_bonus.c ft_lstnew_bonus.c
STDOBJS    = $(STDSRCS:%.c=$(SRCDIR)/%.o)
BNSOBJS = $(BNSSRCS:%.c=$(SRCDIR)/%.o)
.PHONY: all clean fclean re
all: $(NAME) bonus
$(NAME): $(STDOBJS)
    $(BINDIR)/ar rcs $(NAME) $(STDOBJS)
bonus: $(BNSOBJS)
    $(BINDIR)/ar rcs $(NAME) $(BNSOBJS)
%.o: %.c
    $(BINDIR)/$(CC) -o $@ $(FLAGS) -I$(INCDIR) -c $<
clean:
    $(BINDIR)/rm -f $(STDOBJS)
    $(BINDIR)/rm -f $(BNSOBJS)
fclean: clean
    $(BINDIR)/rm -f $(NAME)
re: fclean all
