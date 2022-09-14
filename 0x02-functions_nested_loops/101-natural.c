#include <stdio.h>
/**
 * main - entry
 *
 * Return: 0
 */
int main(void)
{
int multi = 0;
int res = 0;

while (multi < 1024)
{
if (multi % 3 == 0 || multi % 5 == 0)
{
res += multi;
}
multi += 1;
}
printf("%d\n", res);
	return (0);
}
