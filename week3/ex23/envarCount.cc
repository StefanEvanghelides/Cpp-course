#include "main.ih"

size_t envarCount()
{
    size_t count = 0;
    while(environ[count] != nullptr)
        ++count;

    return count;
}