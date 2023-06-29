#include <stdio.h>

/**
 * find_max - a function that finds the maximum value of two given numbers
 * @x: Input of the first value
 * @y: Input of the second value
 *
 * Return: max
 */

int find_max(int x, int y)
{
	int max;

	if (x > y)
		max = x;

	else
		max = y;

	return (max);
}

/**
 * main - a program that prints the maximum value of two given numbers
 *
 * Return: Always 0.
 */

void main(void)
{
	int x;
	int y;

	printf("Enter any two values : \n");
	scanf("%d%d", &x, &y);
	printf("Maximum is %d\n", find_max(x, y));
}
