#include "main.h"
/**
 * print_alphabet - prints alphabet characters
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char alph;

	alph = 'a';
	while (alph <= 'z')
	{
		_putchar(alph);
		alph++;
	}
	_putchar('\n');
}
