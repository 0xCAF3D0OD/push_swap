/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_cmd.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdi-noce <kdi-noce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 17:35:19 by kdi-noce          #+#    #+#             */
/*   Updated: 2022/03/31 12:16:06 by kdi-noce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	manage_sa(t_data *global)
{
	int	x;
	int	temp;

	x = 0;
	if (!(global->tab[0]))
		ft_exit(global, 1);
	temp = global->tab[0][0];
	global->tab[0][0] = global->tab[0][1];
	global->tab[0][1] = temp;
}

void	manage_sb(t_data *global)
{
	int	temp;

	if (!(global->tab[0]))
		ft_exit(global, 1);
	temp = global->tab[1][0];
	global->tab[1][0] = global->tab[1][1];
	global->tab[1][1] = temp;
}

void	manage_ss(t_data *global)
{
	int	x;
	int	y;
	int	temp;

	x = 0;
	y = 0;
	if (!(global->tab[0]))
		ft_exit(global, 1);
	while (y < 2)
	{
		x = 0;
		while (x < global->len_max)
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
		ft_exit(global, 1);
	global->len_a++;
	manage_pa_rra(global);
	global->tab[0][0] = global->tab[1][0];
	manage_pa_rb(global);
	global->len_b--;
}

void	manage_pb(t_data *global)
{
	if (!(global->tab[0]))
		ft_exit(global, 1);
	global->len_b++;
	manage_pb_rrb(global);
	global->tab[1][0] = global->tab[0][0];
	manage_pb_ra(global);
	global->len_a--;
}
