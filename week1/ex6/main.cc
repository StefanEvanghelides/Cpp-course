#include <iostream>

using namespace std;

enum byteSize
{
    CHAR_BIT = 8
};

int main()
{
    size_t number;
    cin >> number; //read number from cin

    //5 solutions
    cout << (number != ((number / 2) * 2) ? "odd" : "even") << "\n";
    cout << (number & 1 ? "odd" : "even") << "\n";
    cout << (number % 2 ? "odd" : "even") << "\n";
    cout << (number << (sizeof(size_t) * CHAR_BIT - 1) ? "odd" : "even") << "\n";
    cout << (((number | ~1) ^ ~1) ? "odd" : "even") << "\n";
}