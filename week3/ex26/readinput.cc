#include "main.ih"

void readInput(uint8_t *bits, string input)
{
	stringstream inputStr(input); //Start a stream
	string substr;
	size_t index = -1;

	while (getline(inputStr, substr, ',')) //Get next substr upto either EOF or next ','
	{
		++index;
		if (substr.length() > 1) //If input is to long
		{
			setBits(bits, E, index);
			continue;
		}

		switch(substr[0])
		{
			case 'b':
			case 'B':
				setBits(bits, B, index);
				break;
			case 's':
			case 'S':
				setBits(bits, S, index);
				break;
			default:
				setBits(bits, E, index);
		}
	}
}