#include "main.ih"

void count_characters()
{
    size_t count = 0;
    
    char buffer;
    while (cin.get(buffer))
        count += 1;

    cout << "Read " << count << " characters.\n";
}