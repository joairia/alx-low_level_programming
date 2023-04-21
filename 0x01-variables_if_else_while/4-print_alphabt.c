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
	int n = 97;

	while (n <= 122)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
