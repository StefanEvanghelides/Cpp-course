#include "main.ih"

size_t nextSqrt(size_t val, size_t estSqrt)
{
	if (val - estSqrt * estSqrt < (estSqrt + 1) * (estSqrt + 1) - val)
		return estSqrt;
	
	return estSqrt + 1;
}
