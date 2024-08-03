# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cde-paiv <cde-paiv@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/08 19:55:26 by cde-paiv          #+#    #+#              #
#    Updated: 2024/07/10 10:19:56 by cde-paiv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SERVER = server
CLIENT = client

CFLAGS = -Wall -Werror -Wextra
CC = gcc
PRINTF = ft_printf/
FT_PRINTF = ft_printf/libftprintf.a

all: 
		@make -C $(PRINTF)
		cc $(CFLAGS) server.c $(FT_PRINTF) -o $(SERVER)
		cc $(CFLAGS) client.c $(FT_PRINTF) -o $(CLIENT)
		
clean:
		@make clean -s -C $(PRINTF)

fclean: clean
		@make fclean -s -C $(PRINTF)
		@rm -f $(SERVER) $(CLIENT)

re: fclean all
