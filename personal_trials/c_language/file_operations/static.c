#include <stdio.h>

/**
 * incrementAge - A program that explains code without static variable.
 * 
 * Return: Age
 */

int incrementAge() {
    int age = 0;
    age++;
    return age;
}

/**
 * main - A program that call the function incrementAge to use
 *
 * Return: Always 0.
 */

int main() {
    int age1 = incrementAge();
    printf("Age1: %d\n", age1);  // output: Age1: 1
    
    int age2 = incrementAge();
    printf("Age2: %d\n", age2);  // output: Age2: 1 again
    
    return 0;
}
