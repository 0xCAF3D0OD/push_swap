/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_valeurs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdi-noce <kdi-noce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 16:17:54 by kdi-noce          #+#    #+#             */
/*   Updated: 2022/03/25 14:57:36 by kdi-noce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int check_len_a(t_data *global, int x, int y)
{	
	y = 0;
	while(y == 0)
	{
		x = 0;
		while (x < global->argc - 1 && y == 0)
			x++;
		y++;
	}
	return (x);
}

int check_len_b(t_data *global, int x, int y)
{	
	y = 0;
	while(y == 1)
	{
		x = 0;
		while (x < global->argc - 1 && y == 0)
			x++;
		y++;
	}
	return (x);
}

int	check_min(t_data *global, int x, int y)
{
	int temp;
	
	temp = INT32_MAX;
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

int check_max(t_data *global, int x, int y)
{
	int temp;
	int i;
	
	i = 1;
	temp = INT32_MIN;
	x = 0;
	while (x < global->len_a && y == 0)
	{
		if (temp < global->tab[y][x])
			temp = global->tab[y][x];
		x++;
	}
	return (temp);
}

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

int check_split(char *global)
{
	char **args;
	int i = 0;
	// int j = 0;
	int tmp;
	int temp;

	temp = 0;
	args = ft_split(global, ' ');
	while (args[i])
	{
		tmp = ft_atoi(args[i]);
		temp++;
		// printf("%d\n", temp[i]);
		i++;
	}
	return temp;
}

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
}