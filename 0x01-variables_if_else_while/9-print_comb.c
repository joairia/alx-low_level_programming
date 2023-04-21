#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
  *main - main entry point
  *Description: 'get the last degiti of a number'
  *Return: 0
  */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
