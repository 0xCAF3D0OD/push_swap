# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kdi-noce <kdi-noce@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/29 17:17:23 by kdi-noce          #+#    #+#              #
#    Updated: 2022/02/07 15:30:49 by kdi-noce         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra
OBJDIR = objs
SRCDIR = srcs
SRC = $(wildcard $(SRCDIR)/*.c)
#SRC =	$(SRCDIR)/BONUS_ft_lstnew.c\
#		$(SRCDIR)/BONUS_ft_lstadd_front.c

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
