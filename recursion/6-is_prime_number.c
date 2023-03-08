#include "main.h"

/**
 * is_prime - recursively divide by higher divisor
 * @n: number to check if prime
 * @div: divisor
 * Return: 1 if prime, 0 if not
 */

int is_prime(int n, int div)
{
	if (n == div)
		return (1);
	if (n % div == 0)
		return (0);
	return (is_prime(n, div + 1));

}

/**
 * is_prime_number - check if prime
 * @n: number to check
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	int div = 3;

	if (n % 2 == 0 || n < 2)
		return (0);
	if (n == 2)
		return (1);

	return (is_prime(n, div));
}
