#include <iostream>
#include <limits>

using namespace std;

void output_odd_even(size_t number)
{
    size_t value = std::numeric_limits<size_t>::max() - 1;

    cout << (number != ((number / 2) * 2) ? "odd" : "even") << "\n";
    cout << (number & 1 ? "odd" : "even") << "\n";
    cout << (number % 2 ? "odd" : "even") << "\n";
    cout << (number << (sizeof(size_t) * 8 - 1) ? "odd" : "even") << "\n";
    cout << (((number | value) ^ value) ? "odd" : "even") << "\n";
}

int main()
{
    cout << "inputting 25\n";
    output_odd_even(25);

    cout << "\ninputting 12\n";
    output_odd_even(12);
}