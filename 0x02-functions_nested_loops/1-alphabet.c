#include "main.h"
/**
 * print_alphabet - print alphabets
 *
 * Return: 0
 */
void print_alphabet(void)
{
int l = 'a';

while (l <= 'z')
{
	_putchar(l);
	l += 1;
}
	_putchar(10);
}
