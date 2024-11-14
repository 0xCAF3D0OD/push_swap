#include "libft.h"

int ft_lstsize(t_list *lst) {
	if (lst == NULL)
		return (0);
	int i = 0;
	while (lst->next)
		i++;
	return (i);
}

int main(void) {
	char** str = ft_split("je m'appel kevin", ' ');
	for (int i = 0; str[i]; i++)
		printf("%s\n", str[i]);
	return (0);
}