#include "main.h"
/** function that checks for lowercase character.
 * created by elmaayouf boubker 
 * Returns 1 if c is lowercase, Returns 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else 
		return (0);
}
