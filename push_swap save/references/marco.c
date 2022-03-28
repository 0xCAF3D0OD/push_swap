#include "push_swap_input.h"

static void	ft_add_to_stack(t_stack **stack, char *str)
{
	if ((*stack) == NULL)
		(*stack) = ft_stack_new(ft_atoi(str));
	else
		ft_stack_add_back(stack, ft_stack_new(ft_atoi(str)));
}

static void	ft_add_input(t_stack **a, char **tab)
{
	int	len;
	int	i;

	len = ft_tablen((void **)tab);
	i = 0;
	while (i < len)
	{
		ft_check_input(tab[i], *a);
		ft_add_to_stack(a, tab[i]);
		i++;
	}
}

int	ft_get_index(t_stack *target, t_stack *a)
{
	int	index;

	index = 0;
	while (a != NULL)
	{
		if (target->nb > a->nb)
		{
			index++;
		}
		a = a->next;
	}
	return (index);
}

void	ft_add_index(t_stack **a)
{
	t_stack	*a_current;

	a_current = *a;
	while (a_current != NULL)
	{
		a_current->index = ft_get_index(a_current, *a);
		a_current = a_current->next;
	}
}

void	ft_get_input(t_stack **a, int argc, char *argv[])
{
	int		i;
	char	**tab;

	i = 0;
	while (++i < argc)
	{
		tab = ft_split(argv[i], ' ');
		ft_add_input(a, tab);
		ft_free_tab(tab);
	}
	ft_add_index(a);
}