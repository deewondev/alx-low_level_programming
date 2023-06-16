#include <stdio.h>
#include <unistd.h>

/**
 * main - This program display exactly a specified line of text.
 * Return: (1) if success, else code error.
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
