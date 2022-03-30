#include "main.h"

int another_check(int n, int num);

/**
 * is_prime_number - checks if input is a prime number
 * @n: number to check on
 * Return: 1 if number is prime and 0 otherwise
 */
int is_prime_number(int n)
{
	return (another_check(n, n--));
}

/**
 * another_check - checks if number is prime
 * @n: number to be checked
 * @num: test number
 * Return: 1 or 0
 */
int another_check(int n, int num)
{
	if (n % num == 0)
		return (0);
	if (n == 1)
		return (1);
	return (another_check(n, n--));
}
