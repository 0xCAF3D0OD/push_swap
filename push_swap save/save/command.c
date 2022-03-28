/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdi-noce <kdi-noce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 15:45:17 by kdi-noce          #+#    #+#             */
/*   Updated: 2022/03/21 11:45:32 by kdi-noce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	manage_cmd(char **argv, t_data *global)
{
	// int x = 0;
	// (void) argv;
	manage_info_tab(argv, global);
	manage_sa(global);
	// check_fct(global);
	manage_sb(global);
	// check_fct(global);
	manage_ss(global);
	// check_fct(global);
	manage_pa(global);
	// check_fct(global);
	manage_pb(global);
	// check_fct(global);
	manage_ra(global);
	// check_fct(global);
	manage_rb(global);
	// check_fct(global);
	manage_rr(global);
	// check_fct(global);
	manage_rra(global);
	// check_fct(global);
	manage_rrb(global);
	check_fct(global);
	manage_rrr(global);
	// check_fct(global);	
}

/*commentaires*/

//five args

	// printf("len_a = %d\n", global->len_a);
	// printf("len_b = %d\n", global->len_b);
	// printf("min = %d\n", global->min);
	// printf("max = %d\n", global->max);
	// printf("x = %d\n", global->tab[0][0]);
	// printf("min_max = %d\n", min_max_b);
	// printf("1. "), check_fct(global);	
	// printf("3. "), check_fct(global);
	// printf("4. "), check_fct(global);
	// printf("x = %d\n", global->tab[1][0]);
	// printf("len_a = %d\n", global->len_a);
	// printf("len_b = %d\n", global->len_b);