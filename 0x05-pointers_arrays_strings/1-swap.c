#include "main.h"

/**
 * swap_int - Swap Value
 * Description: Swap the value in the address of two
 *		integers variables pointed by a pointers a & b.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;

	*a = *b;
	*b = temp;
}
