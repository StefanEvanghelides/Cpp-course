#include "main.ih"

void envarStringArray(size_t length, string envarStrings[])
{
    for (size_t idx = 0; idx < length; ++idx)
        envarStrings[idx] = string{environ[idx]};
}