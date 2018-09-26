#include "main.ih"

size_t nextSqrt(size_t val, size_t estSqrt)
{
	// If estSqrt is closer then incrementing it by one return it
	if (val - estSqrt * estSqrt < (estSqrt + 1) * (estSqrt + 1) - val)
		return estSqrt;
	
	//Otherwise return it incremented by 1
	return estSqrt + 1;
}
