#include "main.ih"

void count_characters()
{
    size_t count = 0;
    
    while (cin.get() != char_traits<char>::eof())
        ++count;

    cout << "Read " << count << " characters.\n";
}