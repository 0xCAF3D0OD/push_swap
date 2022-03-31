/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdi-noce <kdi-noce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 10:54:36 by kdi-noce          #+#    #+#             */
/*   Updated: 2022/03/31 15:37:28 by kdi-noce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_exit(t_data *global, int i)
{
	ft_putstr_fd("Error\n", 2);
	if (i == 1)
	{
		free(global->tab[0]);
		free(global->tab[1]);
		free(global->tab);
	}
	exit(1);
}

//la tour de controle de tous les algos
void	manage_algo(t_data *global)
{
	int	x;
	int	y;
	int	ordre;

	x = 0;
	y = 0;
	global->len_a = check_len_a(global, x, y);
	global->len_b = 0;
	manage_info_tab(global);
	one_arg(global, y);
	check_similaire(global);
	ordre = ordre_checker(global);
	if (ordre == 0)
		exit(1);
	if (global->len_max < 4)
		three_args(global);
	if (global->len_max == 4)
		for_args(global, y, x);
	else if (global->len_max == 5)
		five_args(global, y, x - 1);
	else
		radix(global, x);
}

int	main(int argc, char **argv)
{
	t_data	global;

	if (argc == 2 && ft_isdigit(*argv[1]))
		exit(0);
	global.argc = argc;
	global.argv = argv;
	if (global.argc < 1)
		ft_exit(&global, 0);
	check_len_argv(&global);
	manage_algo(&global);
	return (0);
}

/* push_swap est un algorithme de tri.

- l'algorithme de tri est compose de deux tableaux A et B.
- les valeur passées en paramètre sont passée dans le tableau A et
le tableau B nous permet de traite les différentes valeurs
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

en gros dans le main je traite seulement la structure est
les valeurs passées a la struct, ainsi que la long. d'argv et l'algo principale 

- j'éspère que les noms de fichiers sont assez explicite ,
"push cmd" sont toutes les fonctions de cmd jusqu'à pb
et "push_cmd_in_r" toutes les cmd en r. */