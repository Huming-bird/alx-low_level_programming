#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - start
 * @month: param
 * @day: param2
 * @year: param3
 * Return: void
 */

void print_remaining_days(int month, int year, int day)
{
	if (year % 100 && year % 400 == 0 || year % 4 == 0)
	{
		if (month > 2 && day >= 60)
		{
			day++;
		}
		printf("day of the year: %d \n", day);
		printf("Remaining days: %d \n", 366 - day);
	}
	else
	{
		if (month == 2 && day == 60)
		{
			printf("invalid date %02d/%02d/%04d\n", month, day - 31, year);
		}
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 365 - day);
		}
	}
}

