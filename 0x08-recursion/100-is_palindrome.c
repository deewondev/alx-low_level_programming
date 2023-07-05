#include "main.h"

int r_index(char *s);
int _palindrome_check(char *s, int l_index, int _strlen);

/**
 * is_palindrome - Function that returns 1 if a string
 * is palindrome and 0 if not
 * @s: input string
 * Return: 1 if palindrome or empty string else 0
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (_palindrome_check(s, 0, r_index(s)));
}
/**
 * r_index - Function that returns the length of a string
 * @s: input string
 * Return: integer
 */
int r_index(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + r_index(s + 1));
}
/**
 * _palindrome_check - Function that check if a string is palindrome or not
 * @s: input string
 * @l_index: integer
 * @strlen: integer
 * Return: 1 if palidrome or 0 if not
 */
int _palindrome_check(char *s, int l_index, int strlen)
{
	if (s[l_index] != s[strlen - 1])
		return (0);
	if (l_index >= strlen)
		return (1);
	return (_palindrome_check(s, l_index + 1, strlen - 1));
}
