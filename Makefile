# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kdi-noce <kdi-noce@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/24 19:21:15 by kdi-noce          #+#    #+#              #
#    Updated: 2022/03/31 16:35:43 by kdi-noce         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap
LIB		= libft/libft.a
LIB2	= printf/libftprintf.a
CC		= gcc
CFLAG	= -Wall -Wextra -Werror -g3 -fsanitize=address
SRC		= 	push_swap.c 		\
			push_cmd.c 			\
			push_cmd_in_r.c 	\
			manage_tab.c 		\
			push_swap_algo.c 	\
			pa_pb_fcts.c 		\
			check_valeurs.c		\
			check_fcts_argv.c	\
			check_fcts_tab.c
#OBJ		= $(SRC:.c=.o)

#%.o: %.c
#	$(CC) $(CFLAG) -c $< -o $@
	
all: $(NAME)

$(NAME): $(LIB) $(LIB2) $(SRC)
		$(CC) $(CFLAG) $(SRC) $(LIB) $(LIB2) -o $(NAME)
$(LIB): libft/
		make -C libft
		
$(LIB2): printf/
		make -C printf
test:
		cd push_swap_tester/ && bash tester.sh ../../push_swap 2 100
		cd push_swap_tester/ && bash tester.sh ../../push_swap 3 100
		cd push_swap_tester/ && bash tester.sh ../../push_swap 5 100
		cd push_swap_tester/ && bash tester.sh ../../push_swap 100 100
		cd push_swap_tester/ && bash tester.sh ../../push_swap 500 100

clean:
		make -C libft clean
		make -C printf clean
fclean:
		rm -rf $(NAME)
		make -C libft fclean
		make -C printf fclean
re: fclean all
