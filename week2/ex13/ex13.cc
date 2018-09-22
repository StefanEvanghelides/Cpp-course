#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
    if (argc == 2 && argv[1] == "ok"s)
    {
        size_t line_count = 1;
        string line;
        while (getline(cin, line))
        {
            cout << line_count++ << " " << line << "\n";
        }
    }
    else
    {
        int line_count = 1;
        string line;
        while (!cin.eof())
        {
            getline(cin, line);
            cout << line_count++ << " " << line << "\n";
        }
    }
}