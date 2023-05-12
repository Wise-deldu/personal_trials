#include <stdio.h>

/**
 * main - A simple program that employs printf and scanf
 * 
 * Return: Always 0.
 */

int main(void)
{
	char name[20];

	printf("What is your name: ");
	scanf("%s", name);

	printf("Your name is %s\n", name);
}
