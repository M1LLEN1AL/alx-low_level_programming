#include "main.h"
/*
 * main -entry
 *
 * Return: 0
 */
void print_alphabet(void)
{
int l = 'a';

while (l < 'z')
{
	_putchar(l);
	l += 1;
}
	_putchar(10);
}
