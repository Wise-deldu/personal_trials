#include <stdio.h>

/**
 * main - A program that prints even numbers
 *
 * Return: Always 0.
 */

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 2 == 0)
		printf("%4d", i);
		i++;
	}
	return (0);
}
