/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_fcts_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdi-noce <kdi-noce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 15:20:16 by kdi-noce          #+#    #+#             */
/*   Updated: 2022/03/31 16:26:25 by kdi-noce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// je verifie si les valeurs sont bien toutes différentes
void	check_similaire(t_data *global)
{	
	int	j;
	int	i;

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
	int	x;
	int	compt;

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

void	ft_firsttri(t_data *global)
{
	long int	nb;
	int			i;
	int			j;
	int			s;

	nb = -2147483649;
	i = 0;
	global->tab_c = calloc(sizeof(int), global->len_a + 1);
	while (i != global->len_a)
	{
		s = 0;
		j = 0;
		while (j != global->len_a)
		{
			if (global->tab[0][s] <= nb)
				s++;
			if (global->tab[0][s] > global->tab[0][j] && global->tab[0][j] > nb)
				s = j;
			j++;
		}
		nb = global->tab[0][s];
		global->tab_c[s] = i;
		i++;
	}
}

//cette fonction me permet d'afficher ce qui y a dans le tableau a et b.
void	check_fct(t_data *global)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (y < 2)
	{
		if (y == 0)
		{
			x = 0;
			while (x < global->len_a)
				(ft_printf("A =	%d\n", global->tab[0][x]), x++);
			ft_printf("\n");
		}
		if (y == 1)
		{
			x = 0;
			while (x < global->len_b)
				(ft_printf("B =	%d\n", global->tab[1][x]), x++);
			ft_printf("\n");
		}
		y++;
	}
}
