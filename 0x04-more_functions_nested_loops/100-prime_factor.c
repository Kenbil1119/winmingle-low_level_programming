#include "main.h"

long highest_prime_factor(long num);

/**
 * highest_prime_factor - Return the highest prime factor of a number
 * @num: Long parameter for the number
 *
 * Return: The highest prime factor of num
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */
long highest_prime_factor(long num)
{
	long p_div = 2, prime = num, max_factor = 1;

	while (prime % p_div == 0)
	{
		max_factor = p_div;
		prime /= p_div;
	}

	p_div = 3;
	while (p_div * p_div <= prime)
	{
		while (prime % p_div == 0)
		{
			max_factor = p_div;
			prime /= p_div;
		}
		p_div += 2;
	}

	if (prime > 1)
		max_factor = prime;

	return (max_factor);
}

/**
 * main - Print the highest prime factor for a fixed number
 *
 * Return: 0
 */
int main(void)
{
	long num = 612852475143;
	long HPF = highest_prime_factor(num);

	printf("%ld\n", HPF);

	return (0);
}