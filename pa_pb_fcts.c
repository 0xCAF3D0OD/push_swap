/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_pb_fcts.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdi-noce <kdi-noce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 11:45:51 by kdi-noce          #+#    #+#             */
/*   Updated: 2022/03/31 12:12:29 by kdi-noce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//les fonction suivantes me permette de faire de cmd dans la cmd pa ou pb 
void	manage_pa_rra(t_data *global)
{
	int	x;
	int	temp;

	x = global->len_a - 1;
	temp = 0;
	while (x >= 0)
	{
		if (x == global->len_a)
			temp = global->tab[0][x];
		else if (x == 0)
			global->tab[0][0] = temp;
		else
			global->tab[0][x] = global->tab[0][x - 1];
		x--;
	}
}

void	manage_pa_rb(t_data *global)
{
	int	x;
	int	temp;

	x = 0;
	while (x <= global->len_b)
	{
		if (x == 0)
		{
			temp = global->tab[1][0];
			global->tab[1][0] = global->tab[1][1];
			x++;
		}
		if (x == global->len_b)
			global->tab[1][x] = temp;
		else
			global->tab[1][x] = global->tab[1][x + 1];
		x++;
	}
}

void	manage_pb_rrb(t_data *global)
{
	int	x;
	int	temp;

	x = global->len_b - 1;
	temp = 0;
	while (x >= 0)
	{
		if (x == global->len_b)
			temp = global->tab[1][x];
		else if (x == 0)
			global->tab[1][0] = temp;
		else
			global->tab[1][x] = global->tab[1][x - 1];
		x--;
	}
}

void	manage_pb_ra(t_data *global)
{
	int	x;
	int	temp;

	x = 0;
	temp = 0;
	while (x <= global->len_a - 1)
	{
		if (x == 0)
		{
			temp = global->tab[0][0];
			global->tab[0][0] = global->tab[0][1];
		}
		else if (x == global->len_a - 1)
			global->tab[0][x] = temp;
		else
			global->tab[0][x] = global->tab[0][x + 1];
		x++;
	}
}
