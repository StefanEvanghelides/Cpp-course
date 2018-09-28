#include "main.ih"

void fillFerry(string &ferry, size_t size)
{
	for (size_t idx = 0; idx != size; ++idx)
		insertPerson(ferry, idx + 1);
}