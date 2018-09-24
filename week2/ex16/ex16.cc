#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
    const size_t possibilities = 1 << (argc-1);
    const size_t numArgs = static_cast<size_t>(argc);

    // Basic algorithm for finding all possible combinations
    // using bitstrings
    for (size_t idx = 0; idx != possibilities; ++idx)
    {	
        cout << idx + 1 << ": "; //show the line number

        for (size_t number = idx, count = 1; count != numArgs; ++count)
        {
            if (number & 1)
                cout << argv[count] << ' ';

            number >>= 1;
        }
        cout << "\n";
    }
}