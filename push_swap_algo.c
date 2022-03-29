/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_algo.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdi-noce <kdi-noce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 14:06:51 by kdi-noce          #+#    #+#             */
/*   Updated: 2022/03/29 18:38:12 by kdi-noce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//une des deux fonctions qui m'a fais chier ma race elle permet de spliter les valeurs 
int put_argv_in_tab(char *global, int *tab, int j)
{
	char	**tab_tmp;
	int		tmp;
	int		i;
	int		y;

	i = 0;
	y = 0;
	tab_tmp = ft_split(global, ' ');
	while (tab_tmp[i])
	{
		tmp = ft_atoi(tab_tmp[i]);
		tab[j] = tmp;
		j++;
		i++;
	}
	i = 0;
	while (tab_tmp[i])
		(free(tab_tmp[i]), tab_tmp[i] = NULL, i++);
	free(tab_tmp);
	tab_tmp = NULL;
	return (i);
}
//j'utilise cette fonction pour remplire mon tableau avec les valeurs de l'argv
void	one_arg(t_data *global, int y)
{
	int	i;
	int	*tab;
	int	j;
	
	j = 0;
	i = 1;
	y = global->len_max;
	tab = malloc(sizeof(int*) * y);
	while (i < global->argc)
	{
		j += put_argv_in_tab(global->argv[i], tab, j);
		i++;
	}
	i = -1;
	while (++i < y)
		global->tab[0][i] = tab[i];
	free(tab), tab = NULL;
}

void	three_args(t_data *global)
{
	int	x;

	x = 0;
	if (global->len_a == 2)
	{
		if (global->tab[0][0] > global->tab[0][1])
			printf("sa\n"), manage_sa(global);
	}
	while (x < global->len_a && global->len_a == 3)
	{
		if (global->tab[0][0] > global->tab[0][1])
			printf("ra\n"), manage_ra(global);
		if (global->tab[0][0] >  global->tab[0][1])
			printf("sa\n"), manage_sa(global);
		if (global->tab[0][1] >  global->tab[0][2])
			printf("sa\n"), manage_sa(global);
		if (global->tab[0][0] < global->tab[0][1] && global->tab[0][1] < global->tab[0][2])
			break;
		x++;
	}
}

void	for_args(t_data *global, int y, int x)
{
	int	max_b;
	int	find_max;

	max_b = 0;
	find_max = 0;
	global->max = check_max(global, x, y);
	while (x < global->len_a)
	{
		while (find_max < global->len_a)
		{
			if (global->tab[0][0] == global->max)
				printf("pb\n"), manage_pb(global);
			else
				printf("ra\n"), manage_ra(global);
			find_max++;
		}
		x++;
	}
	three_args(global);
	if (global->tab[1][0] == global->max)
		printf("pa\n"), manage_pa(global), printf("ra\n"), manage_ra(global);
}

void	five_args(t_data *global, int y, int x)
{
	int	min_max_b;
	int	find_min_max;

	min_max_b = 0;
	find_min_max = 0;
	global->min = check_min(global, x, y);
	global->max = check_max(global, x, y);
	while (x < global->len_a)
	{
		min_max_b = check_min_max_b(global, x, y);
		while (find_min_max < global->len_a && min_max_b == 0)
		{	
			if (global->tab[0][0] == global->min)
				printf("pb\n"), manage_pb(global);
			if (global->tab[0][0] == global->max)
				printf("pb\n"), manage_pb(global);
			else
				printf("ra\n"), manage_ra(global);
			find_min_max++;
		}
		x++;
	}
	three_args(global);
	if (global->tab[1][0] == global->max && global->tab[1][1] == global->min)
		printf("pa\n"), manage_pa(global), printf("ra\n"), manage_ra(global), printf("pa\n"), manage_pa(global);
	else if (global->tab[1][0] == global->min && global->tab[1][1] == global->max)
		printf("sb\n"), manage_sb(global), printf("pa\n"), manage_pa(global), printf("ra\n"), manage_ra(global),
		printf("pa\n"), manage_pa(global);
}

void    ft_firsttri(t_data *global)
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

//l'algo principal qui trie en fonction des bites de la valeur
void	radix(t_data *global, int x)
{
	int	i;
	int	len;
	int	bit;
	
	len = global->len_a;
	bit = 0;
	ft_firsttri(global);
	i = check_afer_bigger(global, len);
	while (check_afer_bigger(global, len) == 1)
	{
		x = 0;
		while (x < len)
		{
			if ((global->tab_c[x] >> bit) & 1)
				(manage_ra(global), printf("ra\n"));
			else
				(manage_pb(global), printf("pb\n"));
			x++;
		}
		bit++;
		while (global->len_b > 0)
			(manage_pa(global), printf("pa\n"));
		free(global->tab_c), global->tab_c = NULL;
		ft_firsttri(global);
	}
}

//la tour de controle de tous les algos
void	manage_algo(char **argv, t_data *global)
{
	int	x;
	int	y;
	int	ordre;

	x = 0;
	y = 0;
	global->len_a = check_len_a(global, x, y);
	global->len_b = 0;
	manage_info_tab(argv, global);
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
		five_args(global, y, x);
	else
		radix(global, x);
}
