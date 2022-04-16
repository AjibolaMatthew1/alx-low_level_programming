#include "variadic_function.h"
#include <stdarg.h>

/**
 * 
 * 
 */

int sum_them_all(const unsigned int n, ...)
{
    if (n == 0)
    {
        return (0);
    }

    va_list numbers;

    va_start(numbers, n);

    int i = 0, sum = 0;

    for (i = 0; i < numbers; i++)
    {
        sum += va_arg(numbers, int);
    }
    va_end(numbers);
    return (sum);
}