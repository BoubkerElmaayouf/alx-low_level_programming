#include "lists.h"
void first(void) __attribute__ ((constructor));
/**
 * first - a function that prints You're beat! and yet,
 * you must allow,\nI bore my house upon my back!\n
 * Return: NOTHING
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");

}
