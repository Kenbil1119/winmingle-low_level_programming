#include "main.h"

/**
 * positive_or_negative - Check number
 * @i: Integer parameter to save number
 * Description: Check and print if number in 'i' is Positive, Negative or Zero
 *
 * Return: 0
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */

int positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
		return (0);
	}
	if (i == 0)
	{
		printf("%d is zero\n", i);
		return (0);
	}
	if (i < 0)
	{
		printf("%d is negative\n", i);
		return (0);
	}

	return (0);
}
