#include <stdio.h>

/**
 * incrementAge - A code that demonstrates usage of static variable
 * 
 * Return: age
 */

int incrementAge(void)
{
	static int age = 0;
	age++;
	return (age);
}

/**
 * main - A program that calls the function of incrementAge
 * 
 * Return: Always 0.
 */

int main(void)
{
	int age1 = incrementAge();

	printf("Age1: %d\n", age1); /* output: Age1 */

	int age2 = incrementAge();

	printf("Age2: %d\n", age2); /* output: Age2 */

	int age3 = incrementAge();

	printf("Age3: %d\n", age3); /* output: Age3 */

	return (0);
}
