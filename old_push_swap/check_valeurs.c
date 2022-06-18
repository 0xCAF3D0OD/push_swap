/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_valeurs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdi-noce <kdi-noce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 16:17:54 by kdi-noce          #+#    #+#             */
/*   Updated: 2022/03/31 12:10:36 by kdi-noce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*cette fonction me permet d'établir la longueur de mon tableau 
a (je soupsonne la fonction d'etre inutile lol).*/
int	check_len_a(t_data *global, int x, int y)
{	
	y = 0;
	while (y == 0)
	{
		x = 0;
		while (x < global->len_max)
			x++;
		y++;
	}
	return (x);
}

//je check la valeur minimal de mon tableau
int	check_min(t_data *global, int x, int y)
{
	int	temp;

	temp = MAX_INT;
	while (y < 2)
	{
		x = 0;
		while (x < global->len_a && y == 0)
		{
			if (temp > global->tab[y][x])
				temp = global->tab[y][x];
			x++;
		}
		y++;
	}
	return (temp);
}

int	check_max(t_data *global, int x, int y)
{
	int	temp;

	temp = MIN_INT;
	x = 0;
	while (x < global->len_a && y == 0)
	{
		if (temp < global->tab[y][x])
			temp = global->tab[y][x];
		x++;
	}
	return (temp);
}

int	check_min_max_b(t_data *global, int x)
{
	int	max;
	int	min;

	min = 0;
	max = 0;
	x = 0;
	while (x < global->len_a)
	{
		if (global->tab[1][0] == global->max ||
			global->tab[1][1] == global->max)
			max++;
		if (global->tab[1][0] == global->min ||
			global->tab[1][1] == global->min)
			min++;
		x++;
	}
	if (max == 1 && min == 1)
		return (1);
	else
		return (0);
	return (0);
}

/*cette fonction verifie si la valeur 
suivante est inferieur a la precedente*/
int	check_after_bigger(t_data *global, int len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < len - 1)
	{
		if (global->tab[0][j] > global->tab[0][j + 1])
			i++;
		j++;
	}
	if (i != 0)
		return (1);
	return (0);
}
