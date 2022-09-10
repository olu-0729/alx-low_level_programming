#include <stdio.h>


/**
 * main - prints the alphabet in lowercase, followed by a new line.
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
	putchar('\n');
	return (0);
}
