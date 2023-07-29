# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/28 15:01:59 by chenglee          #+#    #+#              #
#    Updated: 2023/05/10 15:37:56 by chenglee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
ft_calloc.c ft_strdup.c \
ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
ft_putnbr_fd.c
BSRC = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstadd_back.c ft_lstdelone.c \
ft_lstclear.c ft_lstiter.c ft_lstmap.c ft_lstlast.c
HEAD = libft.h
OBJECT = ${SRC:%.c=%.o}
BOBJECT = ${BSRC:%.c=%.o}

CC = cc
AR = ar
FLAGS = -c -Werror -Wextra -Wall
LIBFLAGS = rcs
NAME = libft.a

.PHONY: all
all :$(NAME)

$(NAME): $(OBJECT) 
	$(AR) $(LIBFLAGS) $(NAME) $(OBJECT)

$(OBJECT): %.o: %.c $(HEAD)
	$(CC) $(FLAGS) $< -o $@

$(BOBJECT): %.o: %.c $(HEAD)
	$(CC) $(FLAGS) $< -o $@

.PHONY: bonus
bonus :$(BOBJECT)
	$(AR) $(LIBFLAGS) $(NAME) $(BOBJECT)

.PHONY: clean
clean:
	rm -f $(OBJECT) $(BOBJECT)

.PHONY: fclean
fclean: clean
	rm -f $(NAME)

.PHONY: re
re: fclean all
