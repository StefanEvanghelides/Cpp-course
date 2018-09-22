#include "main.ih"

int main(int argc, char **argv)
try
{
	string input;
	getline(cin, input);

	size_t valCount = count(input.begin(), input.end(),',')+1; //Determine amount of values

	uint8_t bits[(valCount + (valCount - 1)) / 4];	//Initialize array of sufficient size

	readInput(bits, input);	//Store the input in the array

	show(bits, valCount);	//Show the stored values
}
catch (...)
{
    return 1;
}