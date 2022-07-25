#include  "main.h"

/**
 * _isupper - tests whether a character is an uppercase letter
 * @c: character to test.
 * Return: 1 if it is an uppercase letter, 0 if it is not an uppercase letter.
 */

int _isupper(int c)

{

	if (c >= 'A' && c <= 'Z')

		return (1);

	else

		return (0);

}
