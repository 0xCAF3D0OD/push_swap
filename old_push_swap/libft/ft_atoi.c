/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdi-noce <kdi-noce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 16:21:07 by kdi-noce          #+#    #+#             */
/*   Updated: 2022/03/31 15:27:48 by kdi-noce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/* I use a special kind of atoi, therefore I'll implement
 * my_atoi function which will handle some error cases.
 */

void	print_error(void)
{
	ft_putendl_fd("Error\n", 2);
	exit(0);
}

int	ft_atoi(char *args)
{
	int			i;
	int			sign;
	long long	value;

	i = 0;
	sign = 1;
	value = 0;
	if (args[i] == '+' || args[i] == '-')
	{
		if (args[i++] == '-')
			sign = -1;
	}
	while (args[i])
		value = value * 10 + (args[i++] - '0');
	value = value * sign;
	if (value > 2147483647 || value < -2147483648)
		print_error();
	return (value);
}

// int	ft_atoi(const char *nptr)
// {
// 	int	i;
// 	int	j;
// 	int	k;

// 	i = 0;
// 	while (nptr[i] == '\t' || nptr[i] == '\n' || nptr[i] == '\v'
// 		|| nptr[i] == '\f' || nptr[i] == '\r' || nptr[i] == ' ')
// 		i++;
// 	j = 1;
// 	if (nptr[i] == '-' || nptr[i] == '+')
// 	{
// 		if (nptr[i] == '-')
// 		{
// 			j = -1;
// 			i++;
// 		}	
// 		else if (nptr[i] == '+')
// 			i++;
// 	}
// 	k = 0;
// 	while (nptr[i] >= '0' && nptr[i] <= '9')
// 		k = k * 10 + (nptr[i++] - '0');
// 	return (k * j);
// }
