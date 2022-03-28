/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_algo.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdi-noce <kdi-noce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 14:06:51 by kdi-noce          #+#    #+#             */
/*   Updated: 2022/03/25 10:31:20 by kdi-noce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// int check_len_one_arg(char **temp)
// {
// 	int i;

// 	i = 0;
// 	while (temp[i] != 0)
// 		i++;
// 	return (i);
// }

// int *stock_input(t_data *global, char **temp, int x)
// {
// 	int i;
// 	int y;
// 	int *exe;

// 	i = 0;
// 	x = 0;
// 	y = 0;
// 	global->len_a = check_len_one_arg(temp);
// 	exe = calloc(sizeof(int*), global->len_a); 
// 	while (temp[y])
// 	{
// 		i = ft_atoi(temp[y]);
// 		printf("i: %d\n", i);
// 		exe[x] = i;
// 		printf("exe: %d\n", exe[x]);
// 		x++;
// 		y++;
// 	}
// 	x = 0;
// 	while (exe[x])
// 		printf("----------\ntemp: %d\n", exe[x]), x++;
// 	return (exe);
// }

// // void	stock_argv(char **argv, t_data *global, int x, int y)
// // {
// // 	char **temp;
// // 	int exe;
// // 	// int	ordre;
	
// // 	y = 1;
// // 	x = 0;
// // 	int itera = 0;
// // 	printf("argc: %d\n", global->argc);
// // 	while (y < global->argc)
// // 	{
// // 		temp = ft_split(argv[y], ' ');
// // 		itera = 0;
// // 		global->len_a = check_len_one_arg(temp);
// // 		exe = calloc(sizeof(int*), global->len_a); 
// // 		while (temp[itera])
// // 		{
// // 			exe = ft_atoi(temp[itera]);
// // 			global->tab[0][x] = exe;
// // 			x++;
// // 			itera++;
// // 		}
// // 	//	global->tab[0][x] = stock_input(global, temp, x);
// // 		y++;
// // 	}
// // 	x = 0;
// // 	while (global->tab[x])
// // 	{
// // 		for (int i = 0; global->tab[x][i]; i++)
// // 			printf("global: %d\n", global->tab[x][i]);
// // 		x++;
// // 	}
// // 	// ordre = ordre_checker(global);
// // 	// if (ordre != 0)
// // 	// 	ft_printf("tout est dans l'ordre!\n"), exit(1);
	
// // }

// void	one_arg(char **argv, t_data *global, int y)
// {
// 	int x;
// 	int	i;
// 	int j;
// 	(void) global;
// 	// int size;
// 	// char *tab;
// 	// char **exe;
// 	int ordre;
// 	// static int nbr;

// 	x = 0;
// 	y = 0;
// 	i = 0;
// 	j = 0;
// 	ordre = 0;
// 	// stock_argv(argv, global, x, y);
// 	// exe = ft_split(argv[1], ' ');
// 	// global->len_a = check_len_one_arg(exe);
// 	// tab = calloc(global->len_a, sizeof(char*));
// 	// while (exe[y])
// 	// {
// 	// 	i = ft_atoi(exe[y]);
// 	// 	global->tab[0][x] = i;
// 	// 	printf("tab: %d\n", global->tab[0][x]);
// 	// 	x++;
// 	// 	y++;
// 	// }
// 	// ordre = ordre_checker(global);
// 	// if (ordre == 1)
// 	// 	(printf("c'est dans l'ordre!\n"), exit(1));
// }

// void	three_args(t_data *global, int y)
// {
// 	int x;
// 	(void) y;

// 	x = 0;
// 	// printf("%d\n", global->len_a);
// 	if (global->len_a == 2)
// 	{
// 		if (global->tab[0][0] > global->tab[0][1])
// 			printf("sa\n"), manage_sa(global);
// 	}
// 	while (x < global->len_a && global->len_a == 3)
// 	{
// 		if (global->tab[0][0] > global->tab[0][1])
// 			nbr(), printf("ra\n"), manage_ra(global);
// 		if (global->tab[0][0] >  global->tab[0][1])
// 			nbr(), printf("sa\n"), manage_sa(global);
// 		if (global->tab[0][1] >  global->tab[0][2])
// 			nbr(), printf("sa\n"), manage_sa(global);
// 		if (global->tab[0][0] < global->tab[0][1] && global->tab[0][1] < global->tab[0][2])
// 			break;
// 		x++;
// 	}
// }

// void	five_args(t_data *global, int y, int x)
// {
// 	int min_max_b;
// 	int find_min_max;

// 	min_max_b = 0;
// 	find_min_max = 0;
// 	global->min = check_min(global, x, y);
// 	global->max = check_max(global, x, y);
// 	while (x < global->len_a)
// 	{
// 		min_max_b = check_min_max_b(global, x, y);
// 		while (find_min_max < global->len_a && min_max_b == 0)
// 		{	
// 			if (global->tab[0][0] == global->min)
// 				nbr(), printf("pb\n"), manage_pb(global);
// 			if (global->tab[0][0] == global->max)
// 				nbr(), printf("pb\n"), manage_pb(global);
// 			else
// 				nbr(), printf("ra\n"), manage_ra(global);
// 			find_min_max++;
// 		}
// 		x++;
// 	}
// 	three_args(global, y);
// 	if (global->tab[1][0] == global->max && global->tab[1][1] == global->min)
// 		printf("pa\n"), manage_pa(global), printf("ra\n"), manage_ra(global), printf("pa\n"), manage_pa(global);
// 	else if (global->tab[1][0] == global->min && global->tab[1][1] == global->max)
// 		printf("sb\n"), manage_sb(global), printf("pa\n"), manage_pa(global), printf("ra\n"), manage_ra(global),
// 		printf("pa\n"), manage_pa(global);
// }

// int	check_afer_bigger(t_data *global, int len)
// {
// 	int i;
// 	int j;

// 	i = 0;
// 	j = 0;
// 	while (j < len)
// 	{
// 		// printf("global: 	%d\n", global->tab[0][j]);
// 		if (global->tab[0][j] > global->tab[0][j + 1])
// 			i++;
// 		j++;
// 	}
// 	// printf("i = %d\n", i);
// 	if (i != 0)
// 		return (1);
// 	else
// 		return (0);
// 	return (0);
// }

// void	quick_sorte(t_data *global, int x)
// {
// 	int i;
// 	int len;
// 	int bit;
// 	// int temp;
	
// 	len = global->len_a;
// 	bit = 0;
// 	i = check_afer_bigger(global, len);
// 	while (i == 1)
// 	{
// 		// check_fct(global);
// 		while (x < len)
// 		{
// 			// temp = global->tab[0][0];
// 			if ((global->tab[0][0] >> bit) & 1)
// 				(manage_pb(global), printf("pb\n"));
// 			else
// 				(manage_ra(global), printf("ra\n"));
// 			x++;
// 		}
// 		bit++;
// 		while (global->len_b > 0)
// 			(manage_pa(global), printf("pa\n"));
// 		i = check_afer_bigger(global, len);
// 	}	
// }

void	manage_algo(char **argv, t_data *global)
{
	int x;
	int y;
	int i;
	int ordre;

	i = 1;
	x = 0;
	y = 0;
	
	manage_info_tab(argv, global);
	check_similaire(global, y);
	global->len_a = check_len_a(global, x, y);
	global->len_b = check_len_b(global, x, y);
	// if (global->argc == 2)
	// one_arg(argv, global, y), exit(1);
	ordre = ordre_checker(global);
	if (ordre == 1)
		(printf("c'est dans l'ordre!\n"), exit(1));
	// check_tab(argv, global, i);
	// if (global->argc < 5)
	// 	three_args(global, y);
	// if (global->argc == 6)
	// 	five_args(global, y, x);
	// else if (global->argc > 6)
	// 	quick_sorte(global, x);
}
