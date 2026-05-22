#include "main.h"

/**
 * swap_int - Swap Value
 * Description: Swap the value in the address of two
 *		integers variables pointed by a pointers a & b.
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
