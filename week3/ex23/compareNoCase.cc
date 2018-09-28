#include "main.ih"

int compareNoCase(string leftstr, string rightstr)
{
    size_t len_left = leftstr.size();
    size_t len_right = rightstr.size();
    size_t maxlen = len_left > len_right ? len_right : len_left;

    for (size_t idx = 0; idx < maxlen; ++idx)
    {
        char leftchar = tolower(leftstr[idx]);
        char rightchar = tolower(rightstr[idx]);
        
        if (leftchar == rightchar)
            continue;
        
        if (leftchar > rightchar)
            return 1;
        
        return -1;
    }

    if (len_left > len_right)
        return -1;
    if (len_right > len_left)
        return 1;
    return 0;
}