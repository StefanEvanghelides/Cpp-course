#include "main.ih"

size_t count(string input)
{
	size_t amount = 0;
	size_t idx = 0;

	while (true)
	{
		idx = input.find(',', idx + 1); //Determine idx next ,

		if (idx == string::npos)	//Break loop if no more ,
			break;
		++amount;
	}

	return amount;
}