#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 06
 *
 * Return: 0
 */
int main(void)
{
	int i;

	i = 48;
	while  (i < 58)
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
