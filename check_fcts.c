/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_fcts.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdi-noce <kdi-noce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 15:20:16 by kdi-noce          #+#    #+#             */
/*   Updated: 2022/03/29 16:47:19 by kdi-noce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// je verifie si les valeurs sont bien toutes différentes
void	check_similaire(t_data *global, int y)
{	
	int j;
	int i;
	(void) y;
		
	j = 0;
	while (j < global->len_max)
	{
		i = 0;
		while (i < j)
		{
			if (global->tab[0][i] == global->tab[0][j])
				ft_exit(global, 1);
			i++;
		}
		j++;
	}
}
// je verifie si les valeurs sont en désordre
int	ordre_checker(t_data *global)
{
	int x;
	int compt;

	x = 0;
	compt = 0;
	while (x < global->len_a - 1)
	{
		if (global->tab[0][x] > global->tab[0][x + 1])
			return (1);
		x++;
	}
	return (0);
}
//je verifie si les valeurs sont bien toutes des chiffres
void check_argv(t_data *global, char **argv, int i)
{
	int j = 0;

	while(argv[i])
	{
		j = 0;
		while(argv[i][j])
		{
			if (argv[i][j] == '-')
			{	
				if (!(argv[i][j + 1] >= '0' && argv[i][j + 1] <= '9'))
					ft_exit(global, 0);
			}
			else if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
				ft_exit(global, 0);
			j++;
		}
		i++;
	}
}
//cette fonction me permet d'afficher ce qui y a dans le tableau a et b.
void	check_fct(t_data *global)
{
	int x = 0;
	int y = 0;

	while (y < 2)
	{
		if (y == 0)
		{
			x = 0;
			while (x < global->len_a)
			{
				printf("A =	%d\n", global->tab[0][x]);
				x++;			
			}
			printf("\n");
		}
		if (y == 1)
		{
			x = 0;
			while (x < global->len_b)
			{
				printf("B = 	%d\n", global->tab[1][x]);
				x++;			
			}
			printf("\n");
		}
		y++;
	}
}
