#include "main.ih"

void readInput(uint8_t *bits, string input)
{
	size_t index = 0;
	size_t leftIdx = 0;
	size_t rightIdx = 0;
	
	while (true)
	{
		leftIdx = rightIdx;
		rightIdx = input.find(',', leftIdx + 1); //Determine idx of the next ,

		if (rightIdx == string::npos) //If no , is found end the loop
			break;

		if (rightIdx - leftIdx > 2) //If input is to long
		{
			setBits(bits, E, index++);
			continue;
		}

		switch (input[rightIdx - 1])
		{
			case 'b':
			case 'B':
				setBits(bits, B, index++);
			break;
			case 's':
			case 'S':
				setBits(bits, S, index++);
			break;
			default:
				setBits(bits, E, index++);
		}
	}
}