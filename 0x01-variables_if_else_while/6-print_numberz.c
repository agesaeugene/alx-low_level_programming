#include <stdio.h>
/**
 * main - program that prints digits numbers of base 10 starting from zero
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
	putchar('\n');
	return (0);
}
