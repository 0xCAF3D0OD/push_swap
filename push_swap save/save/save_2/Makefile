# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/24 19:21:15 by kdi-noce          #+#    #+#              #
#    Updated: 2022/03/26 18:11:11 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap
LIB		= libft/libft.a
LIB2	= printf/libftprintf.a
CC		= gcc
CFLAG	= -Wall -Wextra -g3 -fsanitize=address
SRC		= push_swap.c push_cmd.c push_cmd_in_r.c manage_tab.c push_swap_algo.c check_fcts.c pa_pb_fcts.c check_valeurs.c
OBJ		= $(SRC:.c=.o)

%.o: %.c
	$(CC) $(CFLAG) -c $< -o $@
	
all: $(NAME)

$(NAME): $(OBJ)
		make -C ./libft
		make -C ./printf
		$(CC) $(CFLAG) $(SRC) $(LIB) $(LIB2) -o $(NAME)
libft.a: libft/
		make -C libft
		
libftprintf.a: printf/
		make -C printf
test:
		cd push_swap_tester/ && bash tester.sh ../../push_swap 2 100
		cd push_swap_tester/ && bash tester.sh ../../push_swap 3 100
		cd push_swap_tester/ && bash tester.sh ../../push_swap 5 100
		cd push_swap_tester/ && bash tester.sh ../../push_swap 100 100
		cd push_swap_tester/ && bash tester.sh ../../push_swap 500 100

clean:
		rm -rf $(OBJ)
		make -C libft clean
fclean:
		rm -rf $(NAME)
re: fclean all
