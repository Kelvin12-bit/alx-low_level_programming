#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - User entry
 * Return: 0
 */
int main(void)
{
char low;
	for (low = 'a'; low <= 'z'; low++)
	{
		if (low == 'e' || low == 'q')
			continue;
	putchar(low);
}
		return (0);
}

