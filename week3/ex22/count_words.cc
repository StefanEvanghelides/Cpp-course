#include "main.ih"

void count_words()
{
    size_t count = 0;

    string buffer;
    while (cin >> buffer)
        count += 1;

    cout << "Read " << count << " words.\n";
}