#include "main.ih"

#include <ctype.h>

string str_to_lower(string original)
{
    for(size_t idx = 0; idx < original.size(); ++idx)
        original[idx] = tolower(original[idx]);
    
    return original;
}