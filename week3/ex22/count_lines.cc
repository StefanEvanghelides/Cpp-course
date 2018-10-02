#include "main.ih"

void count_lines()
{
    size_t count = 0;
    
    string buffer;
    while (getline(cin, buffer))
        ++count;

    cout << "Read " << count << " lines.\n";
}