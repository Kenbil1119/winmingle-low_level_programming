#include "main.h"

int is_prime(long n);
long highest_prime_factor(long num);

/**
 * highest_prime_factor - Check for the highest prime factor of a number
 *
 * @num: Long parameter for the number
 *
 * Return: The HPF (Highest Prime Factor)
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */

long highest_prime_factor(long num)
{
	long p_div = 2, prime = num;

	for (p_div = 2; p_div < prime; p_div++)
		if (is_prime(p_div) != 0)
			while ((p_div < prime) && (prime % p_div) == 0)
				prime /= p_div;

	return (prime);
}

int is_prime(long n)
{
	int i;

	if (n < 2)
		return (0);

	for (i = 2; i <= n; i++)
		if ((i != n) && (n % i == 0))
			return (0);
	return (1);
}

/**
 * main - Print HPF
 * Description: Call highest_prime_factor() to compute th
 *		highest prime factor of a number and print it.
 *
 * Return: 0
 */

int main(void)
{
	long num = 612852475143;
	long HPF = highest_prime_factor(num);

	printf("HPF of %ld is: %ld\n", num, HPF);
	
	return (0);
}
