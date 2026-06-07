#include "main.h"

/**
 * reverse_array - Reverse array
 *
 * @a: Pointer to the array
 * @n: Number of elements in array to reverse
 *
 * Author: Usman Saheed
 * Program: WimMingle Community C Training
 */

void reverse_array(int *a, int n)
{
	int i, j, array[1024];

	if (a == NULL || n < 1)
		return;

	for (i = n - 1, j = 0; i >= 0; i--, j++)
		array[j] = a[i];
	for (i = 0; i < n; i++)
		a[i] = array[i];
}
