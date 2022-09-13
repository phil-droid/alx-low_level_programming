#include "main.h"

/**
 * _islower - function that checks for lowercase characters
 * @c: single letter input
 *The program Returns 1 if int c is lowercase and 0 if otherwise
 */
int islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
