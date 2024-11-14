# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kdi-noce <kdi-noce@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/12 16:35:10 by kdi-noce          #+#    #+#              #
#    Updated: 2021/11/24 21:30:43 by kdi-noce         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a 
CC = gcc
FLAGS = -Wall -Wextra -Werror
OPTION = -c
OBJDIR = objs
SRCDIR = srcs
SRC = $(wildcard $(SRCDIR)/*.c)
#SRC = $(SRCDIR)/ft_split.c
OBJ = $(SRC:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

# Règle par défaut pour créer la bibliothèque
all: $(NAME)

# Crée le répertoire des objets si nécessaire
$(OBJDIR):
	mkdir -p $(OBJDIR)

# Règle pour compiler les fichiers .c en .o
$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

# Nettoyage des fichiers objets
clean:
	/bin/rm -f $(OBJ)

# Nettoyage complet, y compris la bibliothèque
fclean: clean
	/bin/rm -f $(NAME)

# Recompilation complète
re: fclean all

.PHONY: clean fclean re all
