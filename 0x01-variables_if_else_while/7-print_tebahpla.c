#include <stdio.h>

/**
 * main -  prints the lowercase alphabet in reverse
 *
 * Return: 0
 */
int main(void)
{
	char l;

	l = 'z';
	while (l >= 'a')
	{
		putchar(l);
		l--;
	}
	putchar('\n');
	return (0);
}
