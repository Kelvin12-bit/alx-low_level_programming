#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - User entry
 * Return: 0
 */
int main(void)
{
int y;
char low;
	for (y = '0'; y <= '9'; y++)
		putchar (y);
	for (low = 'a'; low <= 'f'; low++)
		putchar(low);
	putchar('\n');
	return (0);
}
