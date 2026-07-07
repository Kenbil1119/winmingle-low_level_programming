#include "main.h"

int check_number(int base, int shift);

/**
 * is_prime_number - Invoke check_number() function to
 *		Check if number pass is a prime number.
 *
 * @n: Integer parameter for the number.
 *
 * Return: 1, if 'n' is a prime number, 0 if otherwise.
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	return (check_number(n, n - 1));

}

/**
 * check_number - Recursively check if the base number is prime
 *
 * @base: Integer parameter for the base number
 * @shift: Integer parameter for sequence of number to check 'base'
 *
 * Return: 1, if 'base' confirm to be prime, else 0.
 *
 * Author: Usman Saheed
 */
int check_number(int base, int shift)
{
	if (shift == 1)
		return (1);
	if (!(base % shift))
		return (0);

	return (check_number(base, shift - 1));
}
