#include "main.h"

/**
 * _abs - Entry point
 *
 * description - This program computes the absolute value of an integer
 *
 * @num: Parameter num takes input from user
 *
 * Return: 0 if success, else code error
 */

int _abs(int num)
{
	if (num < 0)
	{
		return (-num);
	}
	return (num);
}
