#include "main.ih"

void setBits(uint8_t *bits, char value, size_t index)
{
	size_t arrayIdx = index / 4;	//Determine location in array
	size_t subIdx = index % 4;		//Determine location in the byte

	bits[arrayIdx] |= value << subIdx * 2;	//Set the corrosponding bits
}