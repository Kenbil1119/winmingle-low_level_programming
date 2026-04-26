#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print the last digit of a number.
 * Description: Print and Check if the last digit of a randomly generated
 *	number is greater than five (n > 5), equal zero (n == 0) or equal not
 *	zero but less than six (0 < n < 6)
 *
 * Return: 0
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */

int main(void)
{
	int n = 0, avg = RAND_MAX / 2, LastDigit = 0;

	srand(time(0));
	n = rand() - avg;

	LastDigit = n % 10;

	if (LastDigit > 5)
		printf("Last digit of %d is %d and is Greater than 5\n", n, LastDigit);
	else if (LastDigit == 0)
		printf("Last digit of %d is %d and is 0\n", n, LastDigit);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, LastDigit);

	return (0);
}
