#include <stdio.h>

/**
 * incrementAge - A program that employs the usage of static variables
 * 
 * Return: ages
 */

int incrementAge(void)
{
	static int ages[3];
	ages[0]++;
	return ages[0];
}

/**
 * main - A program that calls the function of incrementAge.
 *
 * Return: Always 0.
 */

int main(void)
{
	int age1 = incrementAge();
	printf("Age1: %d\n", age1);  /* output: Age1: 1 */

	int age2 = incrementAge();

	printf("Age2: %d\n", age2);  /* output: Age2: 2 */

	int age3 = incrementAge();

	printf("Age3: %d\n", age3);  /* output: Age3: 3 */
    
    return 0;
}

