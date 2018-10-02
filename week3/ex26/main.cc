#include "main.ih"

int main(int argc, char **argv)
{
	string input;
	getline(cin, input);
	
	preprocess(input); 	//Append ',' to end of string if needed
						//readinputs() assumes ending ,

	size_t valCount = count(input); //Determine amount of values

	uint8_t bits[(valCount + (valCount - 1)) / BYTECAPACITY] = {};

	readInput(bits, input);	//Store the input in the array

	show(bits, valCount);	//Show the stored values
}