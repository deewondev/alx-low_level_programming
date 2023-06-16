#include <stdio.h>

/**
 * main - This program prints all lowercase letters except q and e.
 * Return: (0) if success, else code error.
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != 'q' && alpha != 'e')
		{
			putchar(alpha);
		}
	}
	putchar('\n');
	return (0);
}
