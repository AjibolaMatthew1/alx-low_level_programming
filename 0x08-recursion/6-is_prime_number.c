#include "main.h"

int check(int n, int num);

/**
 * is_prime_number - checks if input is a prime number
 * @n: number to check on
 * Return: 1 if number is prime and 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check(n, n - 1));
}

/**
 * check - checks if number is prime
 * @n: number to be checked
 * @num: test number
 * Return: 1 or 0
 */
int check(int n, int num)
{
	if (num == 1)
		return (1);
	if (n % num == 0 && num > 0)
		return (0);
	return (check(n, num - 1));
}
