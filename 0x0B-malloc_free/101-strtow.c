#include "main.h"

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 * word_len - locates the index end of first word within a string
 * @str: string parameter
 * Return: index end of initial word pointed to by str
 */

int word_len(char *str)
{
	int index = 0, len = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		len++;
		index++;
	}
	return (len);
}

/**
 * count_words - count the number of words contained within a string
 * @str: string parameter
 * Return: number of words within str
 */

int count_words(char *str)
{
	int i = 0, words = 0, len = 0;

	for (i = 0; str[i]; i++)
		len++;

	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ')
		{
			words++;
			i += word_len(str + i);
		}
	}
	return (words);
}

/**
 * strtow - splits a string into words
 * @str: string parameter
 * Return: NULL if empty string, str == NULL or function fails
 * else pointer to array of string str
 */

char **strtow(char *str)
{
	char **strings;
	int index = 0, words, w, letters, l;

	if (str[0] == '\0' || str == NULL)
		return (NULL);

	words = count_words(str);
	if (words == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);

	for (w = 0; w < words; w++)
	{
		while (str[index] == ' ')
			index++;

		letters = word_len(str + index);

		strings[w] = malloc(sizeof(char) * (letters + 1));

		if (strings[w] == NULL)
		{
			while (w >= 0)
			{
				free(strings[w]);
				w--;
			}
			free(strings);
			return (NULL);
		}

		for (l = 0; l < letters; l++)
			strings[w][l] = str[index++];

		strings[w][l] = '\0';
	}
	strings[w] = NULL;

	return (strings);
}
