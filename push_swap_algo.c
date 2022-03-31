/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_algo.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdi-noce <kdi-noce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 14:06:51 by kdi-noce          #+#    #+#             */
/*   Updated: 2022/03/31 16:26:57 by kdi-noce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//j'utilise cette fonction pour remplire mon tableau avec les valeurs de l'argv
void	one_arg(t_data *global, int y)
{
	int	i;
	int	*tab;
	int	j;

	j = 0;
	i = 1;
	y = global->len_max;
	tab = malloc(sizeof(int *) * y);
	while (i < global->argc)
	{
		j += put_argv_in_tab(global->argv[i], tab, j);
		i++;
	}
	i = -1;
	while (++i < y)
		global->tab[0][i] = tab[i];
	free(tab);
	tab = NULL;
}

void	three_args(t_data *global)
{
	int	x;

	x = 0;
	if (global->len_a == 2)
	{
		if (global->tab[0][0] > global->tab[0][1])
			(ft_printf("sa\n"), manage_sa(global));
	}
	while (x < global->len_a && global->len_a == 3)
	{
		if (global->tab[0][0] > global->tab[0][1])
			(ft_printf("ra\n"), manage_ra(global));
		if (global->tab[0][0] > global->tab[0][1])
			(ft_printf("sa\n"), manage_sa(global));
		if (global->tab[0][1] > global->tab[0][2])
			(ft_printf("sa\n"), manage_sa(global));
		if (global->tab[0][0] < global->tab[0][1] &&
			global->tab[0][1] < global->tab[0][2])
			break ;
		x++;
	}
}

void	for_args(t_data *global, int y, int x)
{
	int	max_b;
	int	find_max;

	x = 0;
	max_b = 0;
	find_max = 0;
	global->max = check_max(global, x, y);
	while (x < global->len_a)
	{
		while (find_max < global->len_a)
		{
			if (global->tab[0][0] == global->max)
				(ft_printf("pb\n"), manage_pb(global));
			else
				(ft_printf("ra\n"), manage_ra(global));
			find_max++;
		}
		x++;
	}
	three_args(global);
	if (global->tab[1][0] == global->max)
		(ft_printf("pa\n"), manage_pa(global), ft_printf("ra\n"), manage_ra(global));
}

void	five_args(t_data *global, int y, int x)
{
	int	min_max_b;
	int	find_min_max;

	find_min_max = -1;
	global->min = check_min(global, x, y);
	global->max = check_max(global, x, y);
	while (++x < global->len_a)
	{
		min_max_b = check_min_max_b(global, x);
		while (++find_min_max < global->len_a && min_max_b == 0)
		{	
			if (global->tab[0][0] == global->min)
				(ft_printf("pb\n"), manage_pb(global));
			if (global->tab[0][0] == global->max)
				(ft_printf("pb\n"), manage_pb(global));
			else
				(ft_printf("ra\n"), manage_ra(global));
		}
	}
	three_args(global);
	manage_others_in_five_args(global);
}

//l'algo principal qui trie en fonction des bites de la valeur
void	radix(t_data *global, int x)
{
	int	i;
	int	len;
	int	bit;

	len = global->len_a;
	bit = 0;
	ft_firsttri(global);
	i = check_after_bigger(global, len);
	while (check_after_bigger(global, len) == 1)
	{
		x = 0;
		while (x < len)
		{
			if ((global->tab_c[x] >> bit) & 1)
				(manage_ra(global), ft_printf("ra\n"));
			else
				(manage_pb(global), ft_printf("pb\n"));
			x++;
		}
		bit++;
		while (global->len_b > 0)
			(manage_pa(global), ft_printf("pa\n"));
		(free(global->tab_c), global->tab_c = NULL);
		ft_firsttri(global);
	}
}
