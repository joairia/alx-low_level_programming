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
	int m = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (m <= 90)
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
