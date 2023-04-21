#include "variadic_functions.h"
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...)
{ 
	va_list num;
	unsigned int index, sum = 0;

     va_start(nams, n)

              for (index = 0; index < n;  index++)
		      sum+= va_arg(nums, int);

     va_end(nums);
     
     return (sum);
}
