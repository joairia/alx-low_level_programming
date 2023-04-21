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
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
