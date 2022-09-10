[3:43 AM, 9/10/2022] B.T: #include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: 0
 */
int main(void)
{
	int i;
	char l;

	i = 48;
	while  (i < 58)
	{
		putchar(i);
		i++;
	}

	l = 'a';
	while (l <= 'f')
	{
		putchar(l);
		l++;
	}
	putchar('\n');

	return (0);
}
[3:56 AM, 9/10/2022] B.T: #include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
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
		if (i !=  57)
		{
			putchar(44);
			putchar(32);
			i++;
		}
		else
		{
			i++;
		}
	}
	putchar('\n');

	return (0);
