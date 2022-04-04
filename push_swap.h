/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdi-noce <kdi-noce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 16:02:13 by kdi-noce          #+#    #+#             */
/*   Updated: 2022/04/04 17:35:33 by kdi-noce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include "libft/libft.h"
# include "printf/ft_printf.h"
# include <fcntl.h>

# define MAX_INT 2147483647
# define MIN_INT -2147483648

typedef struct s_data
{
	int		**tab;
	int		*tab_c;
	char	**argv;
	int		argc;
	int		len_max;
	int		len_a;
	int		len_b;
	int		min;
	int		max;
}				t_data;

/*check_fcts_argv.c*/
void	check_len_argv(t_data *global);
int		check_split(char *tab, t_data *global);
void	check_argv(t_data *global, char **argv, int i);
int		put_argv_in_tab(char *global, int *tab, int j);
/*check_fcts_tab.c*/
void	check_similaire(t_data *global);
int		ordre_checker(t_data *global);
void	check_fct(t_data *global);
void	ft_firsttri(t_data *global);
/*push_swap_algo.c*/
void	one_arg(t_data *global, int y);
void	three_args(t_data *global, int y);
void	for_args(t_data *global, int y, int x);
void	five_args(t_data *global, int y, int x);
void	radix(t_data *global, int x);
/*check_valeurs.c*/
int		check_len_a(t_data *global, int x, int y);
int		check_after_bigger(t_data *global, int len);
int		check_min(t_data *global, int x, int y);
int		check_max(t_data *global, int x, int y);
int		check_min_max_b(t_data *global, int x);
/*manage_tab.c*/
void	manage_info_tab(t_data *global);
void	manage_len_tab(t_data *global, int y);
void	manage_others_in_five_args(t_data *global, int temp);
void	check_tab(char **argv, t_data *global, int i);
/*manage_cmd.c*/
void	manage_sa(t_data *global);
void	manage_sb(t_data *global);
void	manage_ss(t_data *global);
void	manage_pa(t_data *global);
void	manage_pb(t_data *global);
/*manage_cmd_in_r.c*/
void	manage_ra(t_data *global);
void	manage_rb(t_data *global);
void	manage_rr(t_data *global);
void	manage_rra(t_data *global);
void	manage_rrb(t_data *global);
void	manage_rrr(t_data *global);
/*pa_pb_fcts.c*/
void	manage_pa_rra(t_data *global);
void	manage_pa_rb(t_data *global);
void	manage_pb_rrb(t_data *global);
void	manage_pb_ra(t_data *global);
/*push_swap.c*/
void	manage_algo(t_data *global);
void	ft_exit(t_data *global, int i);

/*cmd visualisateur:
/python3 pyviz.py `ruby -e "puts (-200..200).to_a.shuffle.join(' ')"`*/

#endif
