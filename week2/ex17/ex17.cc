#include <iostream>
#include <string>

using namespace std;

enum base{
	BINARY = 2
};


int main(int argc, char *argv[])
{

	string input {argv[1]};
	string direction {argv[2]};
	size_t value = stoul(input, 0, BINARY); //Convert binary string 
											//to integral value;

	size_t newValue;
	if (direction == "ror"s)
		newValue = ~(~(value >> 1 | value << input.length() - 1) 
									| ~((1 << input.length()) - 1)); 
		//Shift 1 to the right and place the least significant bit at the 
		// correct location.
	else if (direction == "rol"s)
		newValue = ~(~(value << 1 | value >> input.length() -1) 
									| ~((1 << input.length()) - 1));
		//Shift 1 to the left and place the most signicant bit at the 
		// correct location.

	//Iterate through all bits from most to least significant
	for (size_t idx = input.length(); idx--;) 
		cout << (newValue >> idx & 1 ? 1 : 0);

	cout << ' ' << newValue << ' ' << hex << newValue << '\n'; 

}