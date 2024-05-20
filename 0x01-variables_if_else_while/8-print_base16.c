#include <stdio.h>
/**
 * main - program  to print all the  numbers of base 16 in lowercase
 *
 * Return: Always(0)
 *
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	i = 'a';
	while (i <= 'f')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
