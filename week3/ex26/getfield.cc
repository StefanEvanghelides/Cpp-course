#include "main.ih"

size_t getField(uint8_t *bits, size_t index)
{
	size_t arrayIdx = index / 4;	//Determine location in array
	size_t subIdx = index % 4;		//Determine location within the byte

	return bits[arrayIdx] >> subIdx * 2 & ((1 << 2) -1);	
	//Get the value of the corrosponding bits
}