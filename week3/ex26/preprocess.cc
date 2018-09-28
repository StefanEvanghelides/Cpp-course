#include "main.ih"

void preprocess(string &input)
{
	//If the input does not end in a , append a ,
	if (input[input.length() - 1] != ',')
		input += ',';
}
