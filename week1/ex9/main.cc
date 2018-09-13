#include <iostream>

using namespace std;

//Bit-field containing 11 values as of varying bit-size
struct bitValues {
	unsigned int b0 : 1;
	unsigned int b1 : 3;
	unsigned int b2 : 4;
	unsigned int b3 : 5;
	unsigned int b4 : 4;
	unsigned int b5 : 4;
	unsigned int b6 : 4;
	unsigned int b7 : 4;
	unsigned int b8 : 4;
	unsigned int b9 : 5;
	unsigned int b10 : 2;
};

//Union which maps the value of the bits in the bit-field to a size_t variable
union value
{
	bitValues bits {0,7,15,10,6,7,15,15,7,0,3};
	size_t numericRepresentation;
};

int main()
{
	value number;

	cout << hex << number.numericRepresentation<<"\n";
}