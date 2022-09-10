#include <stdio.h>

/**
 * main -  Prints the alphabet in lowercase, and then in uppercase
 *
 * Return: 0
 */
int main(void)
{
	char l;

	l = 'a';
	while (l <= 'z')
	{
		putchar(l);
		l++;
	}
	l = 'A';
	while (l <= 'Z')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
