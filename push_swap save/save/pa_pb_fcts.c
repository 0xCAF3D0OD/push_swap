/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_pb_fcts.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdi-noce <kdi-noce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 11:45:51 by kdi-noce          #+#    #+#             */
/*   Updated: 2022/03/18 15:15:37 by kdi-noce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	manage_pa_rra(t_data *global)
{
	int	x;
	int temp;

	x = 0;
	temp = 0;
	while(x < global->len_a)
	{
		if (x == global->len_a - 1)
			temp = global->tab[0][x];
		x++;
	}
	while(x >= 0)
	{
		if (x > 0)
			global->tab[0][x] = global->tab[0][x - 1];
		if (x == 0)
			global->tab[0][x] = temp;
		x--;
	}
}

void	manage_pa_rb(t_data *global)
{
	int	x;
	int temp;

	x = 0;
	// temp = 0;
	while (x < global->len_a)
	{
		if (x == 0)
		{
			temp = global->tab[1][0];
			global->tab[1][0] = global->tab[1][1];
		}
		if (x > 0)
			global->tab[1][x] = global->tab[1][x + 1];
		if (x == global->len_a - 1)
			global->tab[1][x] = temp;
		x++;
	}
}

void	manage_pb_rrb(t_data *global)
{
	int	x;
	int temp;

	x = 0;
	temp = 0;
	while(x < global->argc - 1)
	{
		if (x == global->argc - 2)
			temp = global->tab[1][x];
		x++;
	}
	while(x >= 0)
	{
		if (x > 0)
			global->tab[1][x] = global->tab[1][x - 1];
		if (x == 0)
			global->tab[1][x] = temp;
		x--;
	}
}

void	manage_pb_ra(t_data *global)
{
	int	x;
	int temp;

	x = 0;
	temp = 0;
	while(x < global->len_a)
	{
		if (x == 0)
		{
			temp = global->tab[0][0];
			global->tab[0][0] = global->tab[0][1];
		}
		if (x > 0)
			global->tab[0][x] = global->tab[0][x + 1];
		if (x == global->len_a - 1)
			global->tab[0][x] = temp;
		x++;
	}
}
