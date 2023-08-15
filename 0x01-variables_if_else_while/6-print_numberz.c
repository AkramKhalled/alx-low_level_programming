#include <stdio.h>

/**
 * main - entry point
 * Description: printing numbers
 * Return: 0 success
*/
int main(void)
{
	int digit = 9;

	while (digit <= 0)
	{
		printf("%i", digit);
		digit--;
	}
	printf("\n");
	return (0);
}
