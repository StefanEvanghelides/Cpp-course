#include "main.ih"

double sum(double *values, size_t numEl)
{
	double sum = 0;

	for (size_t idx = 0; idx != numEl; ++idx)
		sum += values[idx];

	return sum;
}