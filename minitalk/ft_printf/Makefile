# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cde-paiv <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/13 16:55:08 by cde-paiv          #+#    #+#              #
#    Updated: 2024/05/21 11:16:49 by cde-paiv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRCS = ft_printf.c ft_putchar_pf.c ft_putstr_pf.c ft_putnbr_pf.c ft_unint_pf.c ft_hexa_pf.c ft_putptr_pf.c
LIBFT_SRCS = libft/ft*.c
OBJS = $(SRCS:.c=.o) $(LIBFT_SRCS:.c=.o)

CFLAGS = -Wall -Werror -Wextra
INCLUDES = -I libft

all: $(NAME)

$(NAME): $(OBJS)
	make bonus -C libft
	cp libft/libft.a $(NAME)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

%.o: %.c
	@gcc $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	make clean -C libft
	@rm -rf $(OBJS)

fclean: clean
	make fclean -C libft
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
