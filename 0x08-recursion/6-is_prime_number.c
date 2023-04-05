#include "main.h"

int main_prime(int n, int val);

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if it's a composite number 
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (main_prime(n, n - 1));
}

/**
 * actual_prime - calculates if a number is prime recursively
 * @n: number to evaluate
 * @val: iterator value
 *
 * Return: 1 if n is prime, 0 if  it's a composite number 
 */
int main_prime(int n, int val)
{
	if (val == 1)
		return (1);
	if (n % val == 0 && val > 0)
		return (0);
	return (main_prime(n, val - 1));
}

