#include "main.h"

/**
 * convert_day - Convert day
 * Description: Convert day of the month to day of the year.
 *		No account for leap year
 *
 * @month: Integer parameter for month of the year
 * @day: Integer parameter for day of the month
 *
 * Return: Converted day
 *
 * Author: Usman Saheed
 * Program: WinMingle Community C Training
 */

int convert_day(int month, int day)
{
	if (month > 12 || month <= 0)
		return (0);

	if ((month == 1) && (day > 31))
		return (0);

	switch (month)
	{
		case 2:
			return (day += 31);
			
		case 3:
			return (day += 59);
			
		case 4:
			return (day += 90);
			
		case 5:
			return (day += 120);
			
		case 6:
			return (day += 151);
			
		case 7:
			return (day += 181);
			
		case 8:
			return (day += 212);
			
		case 9:
			return (day += 243);
			
		case 10:
			return (day += 273);
			
		case 11:
			return (day += 304);
			
		case 12:
			return (day += 334);

		default:
			return (day);
	}

}
