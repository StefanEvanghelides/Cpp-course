#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    size_t value = stoul(argv[1], 0, 16);   // initialize hexadecimal value
    size_t nibble = stoul(argv[2]);         // nibble to replace
    size_t replacement = stoul(argv[3]) % 16;   // new nibble (= 0 .. 15)


    size_t clearMask = 15 << nibble*4; //Generate a bitmask with ones at the location of the
    										//to be adjusted nibble.

    value = ~value; //Invert all bits in value
    value |= clearMask; //Make sure all bits of the to be adjusted nibble are set to 1
    value = ~value; //Invert all bits again, the bits in the to be adjusted nibble are now 0
    					// all other bits are unaffected

    value = value | replacement << nibble*4; //Set the bits to be adjusted nibble to the correct value,
    											// by using bit or with the replacement nibble bitshifted
    											// to the correct location

    cout << hex << value << '\n';       // show the new value
}