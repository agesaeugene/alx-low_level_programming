#include <stdio.h>
/**
 * main - print all single digit numbers starting from zero
 *
 * Return: Alway(0)
 *
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar('0' + num);
	}
	putchar('\n');
	return (0);
}
