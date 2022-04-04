/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_tab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdi-noce <kdi-noce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 10:13:20 by kdi-noce          #+#    #+#             */
/*   Updated: 2022/04/04 17:35:09 by kdi-noce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	manage_others_in_five_args(t_data *global, int temp)
{
	if (global->tab[1][0] == temp && global->tab[1][1] == global->min)
		(ft_printf("pa\n"), manage_pa(global), ft_printf("ra\n"),
			manage_ra(global), ft_printf("pa\n"), manage_pa(global));
	else if (global->tab[1][0] == global->min &&
		global->tab[1][1] == temp)
		(ft_printf("sb\n"), manage_sb(global), ft_printf("pa\n"),
			manage_pa(global), ft_printf("ra\n"), manage_ra(global),
			ft_printf("pa\n"), manage_pa(global));
}

//me permet d'etablire la longueur de mon pointeur de tableau
void	manage_len_tab(t_data *global, int y)
{
	global->tab = ft_calloc(2, sizeof(int *));
	while (y < 2)
	{	
		global->tab[y] = ft_calloc(global->len_max, sizeof(int));
		y++;
	}
}

//créer le tableau
void	manage_info_tab(t_data *global)
{	
	int	x;
	int	y;

	x = 0;
	y = 0;
	manage_len_tab(global, y);
	y = 0;
	while (y < 2)
	{
		x = 0;
		while (x < global->argc - 1)
			x++;
		y++;
	}
}
