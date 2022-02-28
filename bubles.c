#include "push_swap.h"

void tri_a_bulle(int *t[], int n)
{
	int en_desordre = 1;
	int j = 0;
	int tmp = 0;

	while (en_desordre)
	{
		while(j < n-1)
		{
			if(t[j] > t[j + 1])
			{
				tmp = t[j+1];
				t[j+1] = t[j];
				t[j] = tmp;

				en_desordre = 1;
			}
		}
	}
}

int main(void)
{
	int t[6] = {1, 4, 2, 5, 7, 10};
	int n;

	n = 0;
	tri_a_bulle(*t[6], n);	
	return (0);
}
