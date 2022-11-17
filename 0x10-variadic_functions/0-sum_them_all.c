#include <stdarg.h>
#include "variadic_functions.h"
/**
*sum_them_all - returns the sum of all parameters
* @n: the numbers of arguments being passed through
* Return: the sum of all parameters
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;

	sum = 0;

	va_list list;

	va_start(valist, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(list, int);
	va_end(list);
	return (sum);
}
