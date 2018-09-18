#include <iostream>
#include <string>

using namespace std;

int main()
{
    string line;
    while(getline(cin, line))       // Read the whitespace head
        if(line.find_first_not_of(" \t") == string::npos) //if string is not empty
            break;
}