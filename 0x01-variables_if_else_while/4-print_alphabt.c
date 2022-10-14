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
		if (low == 'q' || low == 'e')
		{
			continue;
		putchar(low);
		}
	putchar('\n');
	}
	return (0);
}

