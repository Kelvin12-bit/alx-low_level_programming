#include <stdio.h>
/**
 * main - User entry
 * Return: 0
 */
int main(void)
{
int x, y, z;

	for (x = 0; x <= 9; x++)
	{
	for (y = 0; y <= 9; y++)
	{
		for (z = 0; z <= 9; z++)
		{
			if (y < z && z < x)
			{
			putchar(x);
			putchar(y);
			putchar(z);
			if (x == 7 && y == 8 && z == 9)
			{
				break;
				}
				else
				{
			putchar(',');
			putchar(' ');
		}

	}
	}
	}
	}
	putchar ('\n');
	return (0);
}
