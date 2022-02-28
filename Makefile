NAME	= push_swap
LIB1	= libft_a/libft.a
CC	= gcc
CFLAGE	= -Wall -Wextra -Werror
SRC	= bubles.c
OBJ	= $(SRC:.c=.o)
	
.c.o : ${CC} ${CFLAGS} -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAG) $(LIB1) $(OBJ) -o $(NAME)

libft.a:	libft
	make -C libft_a
clean:
	rm -rf $(OBJ)
	make -C libft_a clean

fclean:	clean
	rm -rf $(NAME)
re:	fclean all 
