#include "main.ih"

void preprocess(string &input)
{
	if (input[input.length() - 1] != ',')
		input += ',';
}
