#include <unistd.h>
#include <stdlib.h>
#include "../push_swap.h"

int count_array(char* arr) {
	int i = -1;
	if (arr) {
		while (arr[++i]) {}
		return (i);
	}
	return (0);
}

void print_array(char* arr, char* name) {
	ft_printf("DEBUG FOR %s\n", name);
	ft_printf("DEBUG length %d\n", count_array(arr));
	if (arr) {
		for (int i = 0; arr[i]; i++)
			ft_printf("DEBUG characters [%c]\n", arr[i]);
	}
}


//int* swap_a(int* arr_a, int* arr_b, int* arr_Buffer) {}



//int* push_to_a(int* arr_a, int* arr_b);
void* push_to_b(int* arr_a, int* arr_b) {

}
//
//int* swap_both(int* arr_a, int* arr_b);
//int* rotate_a(int* arr_a, int* arr_b);
//int* rotate_b(int* arr_a, int* arr_b);
//int* rotate_both(int* arr_a, int* arr_b);
//int* reverse_a(int* arr_a, int* arr_b);
//int* reverse_b(int* arr_a, int* arr_b);
//int* reverse_both(int* arr_a, int* arr_b);

void* swap_b(char* arr_a, char* arr_b) {
	if (arr_a && count_array(arr_a) >= 2) {
		arr_b = (char*) malloc(count_array(arr_a) * sizeof (int));
		ft_memcpy(arr_b, arr_a, 2);
	}
	return (arr_b);
}

void* swap_a(char* arr_a, char* arr_b) {
	if (arr_b && count_array(arr_b) >= 2)
		ft_memcpy(arr_a, arr_b, 2);
	return (arr_a);
}

int main(void) {
	char* arr_a = (char*) malloc(3 * sizeof (char));
	char* arr_b = NULL;
//	char* arr_Buffer = NULL;
	arr_a[0] = '6';
	arr_a[1] = '1';
	arr_a[2] = '5';
	arr_a[3] = '\0';

	arr_b = swap_b(arr_a, arr_b);
	print_array(arr_a, "arr_a");
	print_array(arr_b, "arr_b");

	free(arr_a);
	free(arr_b);
	return (0);
}
