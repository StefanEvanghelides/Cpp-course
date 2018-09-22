#include <iostream>
#include <string>

using namespace std;

int main()
{
    string line;
    while (getline(cin, line))      // Read the whitespace head
    {    
        //if string is not empty head is cleared.
        if (line.find_first_not_of(" \t") != string::npos) 
        {
            cout << line;
            break;
        }
    }
    
    size_t empty_lines = 1;
    while (getline(cin, line))
    {
        //if string empty
        if (line.find_first_not_of(" \t") == string::npos)
        {
            empty_lines += 1;
            continue;
        }

        cout << string(empty_lines, '\n'); //Output the empty lines
        empty_lines = 1;

        cout << line;
    }
}