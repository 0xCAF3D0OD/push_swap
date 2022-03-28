/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_pb_fcts.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 11:45:51 by kdi-noce          #+#    #+#             */
/*   Updated: 2022/03/27 13:47:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	manage_pa_rra(t_data *global)
{
	int	x;
	int temp;

	x = 0;
	temp = 0;
	printf("global = %d\n", global->len_a);
	printf("quick_sorte: 2.1.1: manage_pa: 2: manage_pa_rra: 1\n");
	while(x < global->len_b)
	{
		printf("quick_sorte: 2.1.1: manage_pa: 2: manage_pa_rra: 2\n");
		if (x == global->len_b - 1)
			temp = global->tab[0][x];
		printf("quick_sorte: 2.1.1: manage_pa: 2: manage_pa_rra: 3\n");
		x++;
	}
	printf("quick_sorte: 2.1.1: manage_pa: 2: manage_pa_rra: 4\n");
	while(x >= 0)
	{
		printf("x = %d\n", x);
		printf("quick_sorte: 2.1.1: manage_pa: 2: manage_pa_rra: 5\n");
		if (x > 0)
			global->tab[0][x] = global->tab[0][x - 1];
		printf("quick_sorte: 2.1.1: manage_pa: 2: manage_pa_rra: 6\n");
		if (x == 0)
			global->tab[0][x] = temp;
		printf("quick_sorte: 2.1.1: manage_pa: 2: manage_pa_rra: 7\n");
		x--;
	}
	printf("quick_sorte: 2.1.1: manage_pa: 2: manage_pa_rra: 8\n");
}

void	manage_pa_rb(t_data *global)
{
	int	x;
	int temp;

	x = 0;
	// temp = 0;
	while (x < global->len_b)
	{
		if (x == 0)
		{
			temp = global->tab[1][0];
			global->tab[1][0] = global->tab[1][1];
		}
		if (x > 0)
			global->tab[1][x] = global->tab[1][x + 1];
		if (x == global->len_b - 1)
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
	while(x < global->len_max - 1)
	{
		if (x == global->len_max - 2)
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
	while(x < global->len_a - 1)
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
