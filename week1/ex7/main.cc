#include <iostream>

using namespace std;

int main()
{
    size_t input;
    cin >> input;           //read input from cin

    if (input & (input - 1)) // any pow2-1 is all ones, so we mask and check if it is 0
        cout << "the value x is not an exact power of two\n";
    else
        cout << "the value x is an exact power of two\n";
}