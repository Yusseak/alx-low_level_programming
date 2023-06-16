#include <stdio.h>
/**
 * main - print the size of all types
 *
 * Description: This function serves as the entry point for the program.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %lu byte(s)", (unsigned long)siezof(a));
	printf("Size of a int: %lu byte(s)", (unsigned long)siezof(b));
	printf("Size of a long int: %lu byte(s)", (unsigned long)siezof(c));
	printf("Size of a long long int : %lu byte(s)", (unsigned long)siezof(d));
	printf("Size of a float: %lu byte(s)", (unsigned long)siezof(e));
	return (0);
}
