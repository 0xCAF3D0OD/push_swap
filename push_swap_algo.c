/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_algo.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdi-noce <kdi-noce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 14:06:51 by kdi-noce          #+#    #+#             */
/*   Updated: 2022/03/28 16:30:59 by kdi-noce         ###   ########.fr       */
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

int put_argv_in_tab(char *global, int *tab, int j)
{
	char **tab_tmp;
	int tmp;
	int i;
	int	y;

	i = 0;
	y = 0;
	tab_tmp = ft_split(global, ' ');
	while (tab_tmp[i])
	{
		tmp = ft_atoi(tab_tmp[i]);
		tab[j] = tmp;
		j++;
		// printf("rett: %d\n", tab[j]);
		i++;
	}
	i = 0;
	while (tab_tmp[i])
		(free(tab_tmp[i]), tab_tmp[i] = NULL, i++);
	free(tab_tmp);
	tab_tmp = NULL;
	return (i);
}

void	one_arg(t_data *global, int y)
{
	int	i;
	int *tab;
	int j;
	
	j = 0;
	i = 1;
	printf("%d\n", global->len_max);
	printf("%d\n", global->argc);
	y = global->len_max;
	tab = malloc(sizeof(int*) * y);
	while (i < global->argc)
	{
		printf("%s\n", global->argv[i]);
		j += put_argv_in_tab(global->argv[i], tab, j);
		i++;
	}
	i = -1;
	while (++i < y)
		global->tab[0][i] = tab[i];
	if (tab != 0)
		free(tab), tab = NULL;
}

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

int	check_afer_bigger(t_data *global, int len)
{
	int i;
	int j;

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

void	quick_sorte(t_data *global, int x)
{
	int i;
	int len;
	int bit;
	
	len = global->len_a;
	bit = 0;
	i = check_afer_bigger(global, len);
	printf("i = %d\n", i);
	while (i == 1)
	{
		x = 0;
		while (x < len)
		{
			check_fct(global);
			printf("1\n");
			if ((global->tab[0][0] >> bit) & 1)
			printf("len_b = %d\n", global->len_b), (manage_pb(global), printf("pb\n"));
			else
			(manage_ra(global), printf("ra\n"));
			x++;
		}
		bit++;
		printf("3\n");
		while (global->len_b > 0)
			(manage_pa(global), printf("pa\n"), check_fct(global));
		i = check_afer_bigger(global, len);
	}
}

void	manage_algo(char **argv, t_data *global)
{
	int x;
	int y;
	int ordre;

	x = 0;
	y = 0;
	global->len_a = check_len_a(global, x, y);
	global->len_b = 0;
	manage_info_tab(argv, global);
	one_arg(global, y);
	check_similaire(global, y);
	ordre = ordre_checker(global);
	if (ordre == 1)
		(printf("c'est dans l'ordre!\n"), exit(1));
	// if (global->argc < 5)
	// 	three_args(global, y);
	// if (global->argc == 6)
	// 	five_args(global, y, x);
	printf("quick_sorte\n");
	quick_sorte(global, x);
}
