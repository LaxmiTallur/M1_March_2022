#include "multiplyNum.h"

function_status_t multiplyNum(int x, int y, int* result)
{
	long int product= x*y;

	if(product >= INT_MAX)
	  return OVERFLOW;

	if(product <= INT_MAX)
	  return UNDERFLOW;

	*result = product;
	return SUCCESS;
}