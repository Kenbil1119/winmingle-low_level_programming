#include "main.h"

void print_fizz(void);
void print_buzz(void);
void print_number(int);

/**
 * main - Print 1 - 100
 * Description: Print multiple of '3' as 'Fizz'.
 *			multiple of '5' as 'Buzz'
 *			multiple of both as 'FizzBuzz'
 *	and print the number if it does not fall in any of the categories.
 *
 * Return: 0 on complete execution
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (!(num % 3))
			print_fizz();
		if (!(num % 5))
			print_buzz();
		if ((num % 3 != 0) && (num % 5 != 0))
			print_number(num);
		if (num != 100)
			_putchar(' ');
		else
			_putchar('\n');
	}

	return (0);
}

/**
 * print_fizz - Program prints 'Fizz' when call.
 *
 * Return: End Of File (EOF)
 */

void print_fizz(void)
{
	char fizz[5] = "Fizz";
	int i;

	for (i = 0; i < 4; i++)
		_putchar(fizz[i]);

}

/**
 * print_buzz - Program prints 'Buzz' when call.
 *
 * Return: EOF
 */

void print_buzz(void)
{
	char buzz[5] = "Buzz";
	int i;

	for (i = 0; i < 4; i++)
		_putchar(buzz[i]);

}

/**
 * print_number - Print number when call
 *
 * @n: Integer parameter for the number
 *
 * Return: EOF
 */

void print_number(int n)
{
	long highest = 1;
	int temp = n;

	while (temp >= 10)
	{
		temp /= 10;
		highest *= 10;
	}

	while (highest >= 1)
	{
		_putchar((n / highest) + '0');
		n %= highest;
		highest /= 10;
	}
}
