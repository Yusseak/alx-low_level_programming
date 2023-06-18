#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowercase, and then in uppercase,
 * 		followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letters;

	for (letters = 'a' ; letters <= 'z' ; letters++)

		putchar(letters);

	putchar('\n');
	
	for (letters = 'A' ; letters <= 'Z' ; letters++)

		putchar(letters);
	
	putchar('\n');

	return (0);
}