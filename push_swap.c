/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdi-noce <kdi-noce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 10:54:36 by kdi-noce          #+#    #+#             */
/*   Updated: 2022/03/25 14:14:23 by kdi-noce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_data global;
	
	global.argc = argc;
	global.argv = argv;
	if (global.argc < 1)
		exit(1);
	check_len_argv(&global);
	manage_algo(argv, &global);
	return (0);
}
