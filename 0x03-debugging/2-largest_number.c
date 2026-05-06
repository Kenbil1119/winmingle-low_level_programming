#include "main.h"

/* Buggy Code*/
/*int largest_number(int a, int b, int c)
{
    int largest;
 
    if (a > b && b > c)
        largest = a;
    else if (b > a && a > c)
        largest = b;
    else
        largest = c;
 
    return (largest);
}*/


/**
 * largest_number - Check number
 *
 * @a: Integer parameter for first number
 * @b: Integer parameter for second number
 * @c: Integer parameter  for third number
 *
 * Description: Function check for the biggest number between three parameters.
 *
 * Return: largest number (largest)
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */

/* Fixed Code*/
int largest_number(int a, int b, int c)
{
	if (a >= b && a >= c)
		return (a);
	if (b >= a && b >= c)
		return (b);

	return (c);
}
