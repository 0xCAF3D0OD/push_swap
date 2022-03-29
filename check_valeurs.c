/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_valeurs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 16:17:54 by kdi-noce          #+#    #+#             */
/*   Updated: 2022/03/29 10:35:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//cette fonction me permet d'établir la longueur de mon tableau a (je soupsonne la fonction d'etre inutile lol)
int check_len_a(t_data *global, int x, int y)
{	
	y = 0;
	while(y == 0)
	{
		x = 0;
		while (x < global->len_max)
			x++;
		y++;
	}
	return (x);
}
//je check la longueur de b (pour le coup celle ci est vraiment inutile)
int check_len_b(t_data *global, int x, int y)
{	
	(void) y;
	x = 0;
	while (x < global->len_max)
		x++;
	printf ("b = %d\n", x);
	return (x);
}
//je check la valeur minimal de mon tableau
int	check_min(t_data *global, int x, int y)
{
	int temp;
	
	temp = MAX_INT;
	while(y < 2)
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
//le max pour celle ci
int check_max(t_data *global, int x, int y)
{
	int temp;
	
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
//inutile
int check_min_max_b(t_data *global, int x, int y)
{
	int max;
	int min;
	(void) y;

	min = 0;
	max = 0;
	x = 0;
	while (x < global->len_a)
	{
		if (global->tab[1][0] == global->max || global->tab[1][1] == global->max)
			max++;
		if (global->tab[1][0] == global->min || global->tab[1][1] == global->min)
			min++;
		x++;
	}
	if (max == 1 && min == 1)
		return (1);
	else 
		return (0);
	return (0);
}
//cette fonction me permet de compter le nbr de valeur a l'interieur de chaque argument, entre guillemet en particulier
int check_split(char *global)
{
	char **args;
	int i = 0;
	// int j = 0;
	// int tmp;
	int y;
	int temp;

	y = 0;
	temp = 0;
	args = ft_split(global, ' ');
	while (args[i])
	{
		check_argv(args, i);
		temp++;
		i++;
	}
	while (args[y])
		(free(args[y]), args[y] = NULL, y++);
	free(args);
	args = NULL;
	return temp;
}
//cette fonction me permet d'avoir le nbr de valeur dans mes arguments
void	check_len_argv(t_data *global)
{
	int	i;
	// int	j;
	int temp;
	int tmp;

	i = 1;
	temp = 0;
	// printf("%d\n", global->argc);
	while (i < global->argc)
	{
		tmp = check_split(global->argv[i]);
		temp += tmp;
		i++;	
	}
	
	global->len_max = temp;
	printf ("max = %d\n", global->len_max);
}

//cette fonction verifie si la valeur suivante est inferieur a la precedente
int	check_afer_bigger(t_data *global, int len)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (j < len - 1)
	{
		printf("global = %d\n", global->tab[0][j]);
		if (global->tab[0][j] > global->tab[0][j + 1])
			i++;
		j++;
	}
	printf("global = %d\n", global->tab[0][j]);
	if (i != 0)
		return (1);
	return (0);
}
