#include "main.h"

/**
 * argstostr - program that concatenates all arguments
 * @ac: first argument integer
 * @av: second argument string
 * Return: string
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int x, y, z = 0, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			len++;
		}
		len++;
	}

	str = malloc(sizeof(char) * (len + 1));

	if (str == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			str[z] = av[x][y];
			z++;
		}
		str[z] = '\n';
		z++;
	}
	str[z] = '\0';
	return (str);
}
