# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Make                                               :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chenglee <chenglee@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/27 17:18:09 by chenglee          #+#    #+#              #
#    Updated: 2023/06/27 17:18:12 by chenglee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = 
OBJS = ${SRCS:%.c=%.o}
HEAD = push_swap.h
NAME = push_swap

CC = cc
CFLAGS = -Wall -Werror -Wextra -c

LIBFTDIR = ./libft
FT_PRINTFDIR = ./ft_printf
LIBFT = $(LIBFTDIR)/libft.a
FT_PRINTF = $(FT_PRINTFDIR)/libftprintf.a

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT) $(FT_PRINTF)
	$(CC) $(OBJS) $(LIBFT) $(FT_PRINTF) -o $@

$(OBJS):%.o:%.c $(SRCS)
	$(CC) $(CFLAGS) $< -o $@

$(LIBFT):
	$(MAKE) -C $(LIBFTDIR)

$(FT_PRINTF):
	$(MAKE) -C $(FT_PRINTFDIR)

clean:
	$(MAKE) -C $(LIBFTDIR) clean
	$(MAKE) -C $(FT_PRINTFDIR) clean
	rm -rf $(OBJS)

fclean: clean
	$(MAKE) -C $(LIBFTDIR) fclean
	$(MAKE) -C $(FT_PRINTFDIR) fclean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re