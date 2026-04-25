#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 *
 * Function: main
 * Description: Prints if a randomly generated number is
 *		Positive, Negative or Zero
 *
 * Return - 0
 */

int main(void)
{
	int n = 0, avg = RAND_MAX/2;
	
	srand(time(0));
	n = rand() - avg;
	
	if(n > 0){

		printf("%d is positive\n", n);
		return (0);
	}
	if (n == 0){

		printf("%d is zero\n", n);
		return (0);
	}
	if (n < 0){

		printf("%d is negative\n", n);
		return (0);
	}

	return (0);
}
