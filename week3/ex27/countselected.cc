#include "main.ih"

size_t countSelected(bool bits[])
{
	size_t sum = 0;
	for (size_t idx = 0; idx != nTotal; ++idx)
		if (bits[idx])
			++sum;

	return sum;
}