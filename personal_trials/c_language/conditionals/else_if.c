#include <stdio.h>

/**
 * main - A program that demonstrates else-if.
 *
 * Return: Always 0.
 */

int main(void)
{
	int x, y, z, max;

	printf("Enter any three values : \n");
	scanf("%d%d%d", &x, &y, &z);

	if (x > y && x > z)
		max = x;
	else if (y > z && y > x)
		max = y;
	else
		max = z;
	printf("Maximum value is : %d\n", max);

	return (0);
}
