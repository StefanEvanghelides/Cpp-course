#include "main.ih"

size_t count(string input)
{
	size_t amount = 0;
	size_t idx = 0;

	do 
	{
		idx = input.find(',', idx + 1);
		++amount;
	} while (idx != string::npos);

	return amount;
}