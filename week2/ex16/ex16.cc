#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
	size_t possibilities = 1 << (argc-1);

	// Basic algorithm for finding all possible combinations
	// using bitstrings
	for (size_t idx = 0; idx != possibilities; ++idx)
	{	
		cout << idx + 1 << ": "; //show the line number

		for (size_t number = idx, count = 1; count != argc, number != 0; ++count)
		{
			if (number & 1)
				cout << argv[count] << ' ';
			number >>= 1;
		}
		cout << endl;
	}
}