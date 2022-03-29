/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 10:54:36 by kdi-noce          #+#    #+#             */
/*   Updated: 2022/03/29 00:33:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_data global;
	
	global.argc = argc;
	global.argv = argv;
	if (global.argc < 1)
		exit(1);
	check_len_argv(&global);
	manage_algo(argv, &global);
	return (0);
}

/* push_swap est un algorithme de tri.

- l'algorithme de tri est compose de deux tableaux A et B.
- les valeur passées en paramètre sont passée dans le tableau A et le tableau B nous permet de traite les différentes valeurs
avec nos cmd.
- les cmd sont:
	- sa (switch a)
	- sb
	- pa (put in a)
	- pb
	- ra (rotate a)
	- rb
	- rra
	- rrb
- j'assigne les valeurs à des structures qui sont dans le .h

en gros dans le main je traite seulement la structure est les valeurs passées a la struct, ainsi que la long. d'argv
et l'algo principale 

- j'éspère que les noms de fichiers sont assez explicite ,"push cmd" sont toutes les fonctions de cmd jusqu'à pb
et "push_cmd_in_r" toutes les cmd en r. */