/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_tab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 10:13:20 by kdi-noce          #+#    #+#             */
/*   Updated: 2022/03/28 21:33:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
//me permet d'etablire la longueur de mon pointeur de tableau
void	manage_len_tab(t_data *global, int y)
{
	global->tab = ft_calloc(2, sizeof(int*));
	while (y < 2)
	{	
		global->tab[y] = ft_calloc(global->len_max, sizeof(int));
		y++;
	}
}
//créer le tableau
void	manage_info_tab(char **argv, t_data *global)
{	
	int x;
	int y;
	(void) argv;

	x = 0;
	y = 0;
	manage_len_tab(global, y);
	y = 0;	
	while (y < 2)
	{
		x = 0;
		while(x < global->argc - 1)
			x++;
		y++;
	}
}