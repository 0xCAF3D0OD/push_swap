/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_tab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdi-noce <kdi-noce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 10:13:20 by kdi-noce          #+#    #+#             */
/*   Updated: 2022/03/25 14:15:11 by kdi-noce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	manage_len_tab(t_data *global, int x, int y)
{
	global->tab = ft_calloc(2, sizeof(int*));
	while (y < 2)
	{	
		x = 0;
		global->tab[y] = ft_calloc(global->len_max, sizeof(int));
		y++;
	}
}

void	manage_info_tab(char **argv, t_data *global)
{	
	int x;
	int y;

	x = 0;
	y = 0;
	manage_len_tab(global, x, y);
	y = 0;	
	while (y < 2)
	{
		x = 0;
		while(x < global->argc - 1)
		{
			if (y < 1)
				global->tab[y][x] = ft_atoi(argv[x + 1]);
			x++;
		}
		y++;
	}
}