#include "main.h"
/* Write a function that checks for alphabetic character
 * created by elmaayouf boubker 
 * Returns 1 if c is a letter, lowercase or uppercase, Returns 0 otherwise
 */
int _isalpha(int c)
{
 return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
