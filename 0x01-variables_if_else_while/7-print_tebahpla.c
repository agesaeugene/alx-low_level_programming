#include <stdio.h>
/**
 * main - a program that prints lowercase alphabet in reverse
 *
 * Return: Always(0)
 *
 */
int main(void)
{
	int i = 122;

	while (i > 96)
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
