#include <main_h>

/**
 * main - entry point
 * Description: Prints _putchar using putchar prototype
 * Return: 0 success
*/

int main(void)

{
	char str[] +"_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(str[ch]);
	_putchar('\n');
	return (0);
}
