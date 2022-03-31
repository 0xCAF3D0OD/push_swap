/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_fcts_argv.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdi-noce <kdi-noce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 10:52:13 by kdi-noce          #+#    #+#             */
/*   Updated: 2022/03/31 15:39:06 by kdi-noce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*une des deux fonctions qui m'a fais chier 
ma race elle permet de spliter les valeurs*/
int	put_argv_in_tab(char *global, int *tab, int j)
{
	char	**tab_tmp;
	int		tmp;
	int		i;
	int		y;

	i = 0;
	y = 0;
	tab_tmp = ft_split(global, ' ');
	while (tab_tmp[i])
	{
		tmp = ft_atoi(tab_tmp[i]);
		tab[j] = tmp;
		j++;
		i++;
	}
	i = 0;
	while (tab_tmp[i])
		(free(tab_tmp[i]), tab_tmp[i] = NULL, i++);
	free(tab_tmp);
	tab_tmp = NULL;
	return (i);
}

//je verifie si les valeurs sont bien toutes des chiffres
void	check_argv(t_data *global, char **argv, int i)
{
	int	j;

	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] == '-')
			{	
				if (!(argv[i][j + 1] >= '0' && argv[i][j + 1] <= '9'))
					ft_exit(global, 0);
			}
			else if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
				ft_exit(global, 0);
			j++;
		}
		i++;
	}
}

/*cette fonction me permet de compter le nbr de valeur a 
l'interieur de chaque argument, entre guillemet en particulier*/
int	check_split(char *tab, t_data *global)
{
	char	**args;
	int		i;
	int		y;
	int		temp;

	i = 0;
	y = 0;
	temp = 0;
	args = ft_split(tab, ' ');
	while (args[i])
	{
		check_argv(global, args, i);
		temp++;
		i++;
	}
	while (args[y])
		(free(args[y]), args[y] = NULL, y++);
	free(args);
	args = NULL;
	return (temp);
}

//cette fonction me permet d'avoir le nbr de valeur dans mes arguments
void	check_len_argv(t_data *global)
{
	int	i;
	int	temp;
	int	tmp;

	i = 1;
	temp = 0;
	while (i < global->argc)
	{
		tmp = check_split(global->argv[i], global);
		temp += tmp;
		i++;
	}
	global->len_max = temp;
}
