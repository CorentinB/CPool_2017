/*
** EPITECH PROJECT, 2017
** my_sort_int_array
** File description:
** Sort int array.
*/

int heap_size;

void heapify(int* A, int i)
{
	int l = 2 * i + 1;
	int r = 2 * i + 2;
	int largest;

	if (l <= heap_size && A[l] > A[i])
		largest = l;
	else
		largest = i;
	if (r <= heap_size && A[r] > A[largest])
		largest = r;
	if (largest != i)
	{
		int temp = A[i];
		A[i] = A[largest];
		A[largest] = temp;
		heapify(A, largest);
	}
}

void build_heap(int* A, int size)
{
	int i;

	heap_size = size - 1;
	for (i = (size - 1) / 2; i >= 0; i--)
		heapify(A, i);
}

void my_sort_int_array(int *tab, int size)
{
	int i;

	build_heap(tab, size);
	for (i = size - 1; i > 0; i--)
	{
		int temp = tab[heap_size];
		tab[heap_size] = tab[0];
		tab[0] = temp;
		heap_size--;
		heapify(tab, 0);
	}
}
