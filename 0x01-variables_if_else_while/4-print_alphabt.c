#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowercase, and then in uppercase,
 *		Print all the letters except q and e.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letters;

	for (letters = 'a' ; letters <= 'z' ; letters++)
	{

		if (letters == 'q' || letters == 'e')
		{
			continue;
		}
		putchar(letters);
	}

	putchar('\n');

	return (0);
}
