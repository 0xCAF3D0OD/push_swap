/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_cmd.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 17:35:19 by kdi-noce          #+#    #+#             */
/*   Updated: 2022/03/27 13:37:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	manage_sa(t_data *global)
{
	int temp;
	
	if (!(global->tab[0]))
		printf("error\n"), exit(1);
	temp = global->tab[0][0];
	global->tab[0][0] = global->tab[0][1];
	global->tab[0][1] = temp;
}

void	manage_sb(t_data *global)
{
	int temp;

	if (!(global->tab[0]))
		printf("error\n"), exit(1);
	temp = global->tab[1][0];
	global->tab[1][0] = global->tab[1][1];
	global->tab[1][1] = temp;
}

void	manage_ss(t_data *global)
{
	int	x = 0;
	int	y = 0;
	int temp;
	if (!(global->tab[0]))
		printf("error\n"), exit(1);
	while (y < 2)
	{
		x = 0;
		while(x < global->argc - 1)
		{
			if (x == 1)
			{
				temp = global->tab[y][0];
				global->tab[y][0] = global->tab[y][1];
				global->tab[y][1] = temp;
			}
			x++;
		}
		y++;
	}
}

void	manage_pa(t_data *global)
{
	if (!(global->tab[0]))
		printf("error\n"), exit(1);
	printf("quick_sorte: 2.1.1: manage_pa: 1\n");
	global->len_a++;
	printf("quick_sorte: 2.1.1: manage_pa: 2\n");
	manage_pa_rra(global);
	printf("quick_sorte: 2.1.1: manage_pa: 3\n");
	global->tab[0][0] = global->tab[1][0];
	printf("quick_sorte: 2.1.1: manage_pa: 4\n");
	manage_pa_rb(global);
	printf("quick_sorte: 2.1.1: manage_pa: 5\n");
	global->len_b--;
}

void	manage_pb(t_data *global)
{
	printf("quick_sorte: 2.1.1: manage_pb: 1\n");
	if (!(global->tab[0]))
		printf("error\n"), exit(1);
	printf("quick_sorte: 2.1.1: manage_pb: 2\n");
	global->len_b++;
	printf("quick_sorte: 2.1.1: manage_pb: 3\n");
	manage_pb_rrb(global);
	printf("quick_sorte: 2.1.1: manage_pb: 4\n");
	global->tab[1][0] = global->tab[0][0];
	printf("quick_sorte: 2.1.1: manage_pb: 5\n");
	manage_pb_ra(global);
	printf("quick_sorte: 2.1.1: manage_pb: 6\n");
	global->len_a--;
}
