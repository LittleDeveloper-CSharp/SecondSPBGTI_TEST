#include <stdio.h>

void map(int arr[], int size, void (*cut_ptr)(int*)) {
	for (int i = 0; i < size; i++) {
		cut_ptr(arr + i);
	}
}

void cut(int* val) {
	if (*val % 2 == 0)
		*val = 0;
}

int main()
{
	const int size = 4;
	int arr[4] = {1, 2, 3, 4};
	void(*cut_prt)(int*) = cut;

	map(arr, size, cut_prt);

	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}

