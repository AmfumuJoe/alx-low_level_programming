#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9).
 * @c: digit to test.
 * Return: 1 if it is a digit, 0 if it is not.
 */

int _isdigit(int c)

{

	if (c >= '0' && c <= '9')

		return (1);

	else

		return (0);

}
