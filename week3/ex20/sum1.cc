#include "main.ih"

int sum(int *values, size_t numEl)
{
	int sum = 0;

	for (size_t idx = 0; idx != numEl; ++idx)
		sum += values[idx];
	
	return sum;	
}