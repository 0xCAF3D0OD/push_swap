#include <stdio.h>

void func(int *i)
{
	i++;
}


int main (void)
{
	int *i;

	i = 0;

	for (int j = 0; j < 10; j++) {
		func(i);
		printf("%d\n", *i);
	}
}
