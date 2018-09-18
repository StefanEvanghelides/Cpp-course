#include <iostream>
#include <string>

using namespace std;

int main()
{
    string line;
    while (getline(cin, line))       // Read the whitespace head
        if (line.find_first_not_of(" \t") != string::npos) //if string is not empty head is cleared.
        {
            cout << line;
            break;
        }

    size_t empty_lines = 1;
    while (getline(cin, line))
    {
        if (line.find_first_not_of(" \t") == string::npos) //if string empty
        {
            empty_lines += 1;
            continue;
        }

        cout << string(empty_lines, '\n');
        empty_lines = 1;

        cout << line;
    }
}