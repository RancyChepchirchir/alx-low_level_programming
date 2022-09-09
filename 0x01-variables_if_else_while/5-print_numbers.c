#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int r;

for (r = 0; r <= 9; r++)
{
printf("%d", r);
}
printf("\n");
return (0);
}


/**
 * main - main block
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */
//int main(void)
//{
//	char c = '0';
//
//	while (c <= '9')
//	{
//		putchar(c);
//		c++;
//	}
//
//	putchar('\n');
//	return (0);
//}
