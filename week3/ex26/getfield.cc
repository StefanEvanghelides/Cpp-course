#include "main.ih"

size_t getField(uint8_t *bits, size_t index)
{
	size_t arrayIdx = index / BYTECAPACITY;	//Determine location in array
	size_t subIdx = index % BYTECAPACITY;	//Determine location within the byte

	return bits[arrayIdx] >> subIdx * VALUEWIDTH & ((1 << VALUEWIDTH) -1);	
	//Get the value of the corrosponding bits
}