#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{   
    size_t line_count = 0;
    if (argc == 2 && argv[1] == "ok"s)
    {
        string line;
        while (getline(cin, line))
            line_count += 1;
    }
    else
    {
        string line;
        while (!cin.eof())
        {
            getline(cin, line);
            line_count += 1;
        }
    }

    cout << "# of lines: " << line_count << "\n";
}