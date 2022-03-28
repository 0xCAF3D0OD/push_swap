/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 10:54:36 by kdi-noce          #+#    #+#             */
/*   Updated: 2022/03/26 19:48:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_data global;
	int	i;
	
	i = 1;
	global.argc = argc;
	global.argv = argv;
	if (global.argc < 1)
		exit(1);
	check_len_argv(&global);
	manage_algo(argv, &global);
	return (0);
}
