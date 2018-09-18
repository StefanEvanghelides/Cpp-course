#include <iostream>
#include <string>

using namespace std;

enum base{
	BINARY = 2
};


int main(int argc, char *argv[])
{

	string input (argv[1]);
	string direction (argv[2]);
	size_t value = stoul(input, nullptr, BINARY); //Convert binary string to integral value;

	size_t newValue;
	if (!direction.compare("ror"))
		newValue = ~(~(value >> 1 | value << input.length() - 1) | ~((1 << input.length()) - 1)); 
		//Shift 1 to the right and place the least significant bit at the correct location
		//Note that left shifting introduces bits outside the original bit-range which are removed
	else if (!direction.compare("rol"))
		newValue = ~(~(value << 1 | value >> input.length() -1) | ~((1 << input.length()) - 1));
		//Shift 1 to the left and place the most signicant bit at the correct location
		//Note that left shifting introduces bits outside the original bit-range which are removed

	for (size_t idx = input.length(); idx--;) //Iterate through all bits from most to least significant
	{
		if (newValue >> idx & 1) // Print the value of the idx'th bit
			cout << 1;			
		else
			cout << 0;
	}

	cout << ' ' << newValue << ' ' << hex << newValue << '\n'; //Output the decimal and hexadecimal value 

}