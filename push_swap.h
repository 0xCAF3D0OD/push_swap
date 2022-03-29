/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdi-noce <kdi-noce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 16:02:13 by kdi-noce          #+#    #+#             */
/*   Updated: 2022/03/29 18:41:59 by kdi-noce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include "libft/libft.h"
//# include "printf/ft_printf.h"
# include <fcntl.h>

# define MAX_INT 2147483647
# define MIN_INT -2147483648

typedef struct	s_data
{
	int	**tab;
	int *tab_c;
	char **argv;
	int	argc;
	int	len_max;
	int len_a;
	int len_b;
	int min;
	int max;
}				t_data;

void	check_len_argv(t_data *global);
void	check_argv(t_data *global, char **argv, int i);
int		ordre_checker(t_data *global);
int		put_argv_in_tab(char *global, int *tab, int j);
void	manage_cmd(char **argv, t_data *global);
int 	check_split(char *global, t_data *global_2);
void	manage_info_tab(char **argv, t_data *global);
void	manage_len_tab(t_data *global, int y);
void	radix(t_data *global, int x);
void	check_tab(char **argv, t_data *global, int i);
void	check_similaire(t_data *global);
void	manage_free(t_data *global);
void	check_fct(t_data *global);
int 	check_len_a(t_data *global, int x, int y);
int		check_len_b(t_data *global, int x, int y);
void	manage_sa(t_data *global);
void	manage_sb(t_data *global);
void	manage_ss(t_data *global);
void	manage_pa(t_data *global);
void	manage_pa_rra(t_data *global);
void	manage_pa_rb(t_data *global);
void	manage_pb(t_data *global);
void	manage_pb_rrb(t_data *global);
void	manage_pb_ra(t_data *global);
void	manage_ra(t_data *global);
void	manage_rb(t_data *global);
void	manage_rr(t_data *global);
void	manage_rra(t_data *global);
void	manage_rrb(t_data *global);
void	manage_rrr(t_data *global);
void	manage_algo(char **argv, t_data *global);
int		check_afer_bigger(t_data *global, int len);
int		check_min(t_data *global, int x, int y);
int 	check_max(t_data *global, int x, int y);
int		check_min_max_b(t_data *global, int x, int y);
void	ft_exit(t_data *global, int i);

#endif
