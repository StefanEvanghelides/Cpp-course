#include "main.ih"

void setBits(uint8_t *bits, char value, size_t index)
{
	size_t arrayIdx = index / BYTECAPACITY;	//Determine location in array
	size_t subIdx = index % BYTECAPACITY;	//Determine location in the byte

	bits[arrayIdx] |= value << subIdx * VALUEWIDTH;	//Set the corrosponding bits
}