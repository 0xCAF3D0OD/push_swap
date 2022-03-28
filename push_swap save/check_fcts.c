/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_fcts.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdi-noce <kdi-noce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 15:20:16 by kdi-noce          #+#    #+#             */
/*   Updated: 2022/03/25 10:18:51 by kdi-noce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	nbr(void)
{
	static int nbr;

	nbr = 1;
	// printf("\nmanage nbr: %d\n", nbr++);
}

void	check_similaire(t_data *global, int y)
{	
	int j;
	int i;
		
	j = 1;
	while (j < global->argc - 1)
	{
		i = 0;
		while (i < j && y == 0)
		{
			if (global->tab[y][i] == global->tab[y][j])
				ft_printf("error\n"), exit(1);				
			i++;
		}
		j++;
	}
}

int	ordre_checker(t_data *global)
{
	int x;
	int compt;

	x = 0;
	compt = 0;
	while (x < global->len_a)
	{
		printf("x: %d\n", global->tab[0][x]);
		if (global->tab[0][x] > global->tab[0][x + 1])
			compt++;
		printf("boucle: %d\n", compt);
		x++;
	}
	if (compt == 0)
		return (1);
	else
		return (0);
}

void check_tab(char **argv, t_data *global, int i)
{
	int j = 0;

	(void) global;
	while(argv[i])
	{
		j = 0;
		while(argv[i][j])
		{
			if (argv[i][j] == '-')
			{
				if (!(argv[i][j + 1] >= '0' && argv[i][j + 1] <= '9'))
					(ft_printf("error\n"), exit(1));
			}
			else if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
				(ft_printf("error\n"), exit(1));
			j++;
		}
		i++;
	}
}

void	check_fct(t_data *global)
{
	// static int j = 0;
	int x = 0;
	int y = 0;

	// printf("j = %d\n\n", j++);
	while (y < 2)
	{
		if (y == 0)
		{
			x = 0;
			while (x < global->len_a)
			{
				ft_printf("A =	%d\n", global->tab[0][x]);
				x++;			
			}
			printf("\n");
		}
		if (y == 1)
		{
			x = 0;
			while (x < global->len_b)
			{
				ft_printf("B = 	%d\n", global->tab[1][x]);
				x++;			
			}
			printf("\n");
		}
		y++;
	}
}
