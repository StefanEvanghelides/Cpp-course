#include <iostream>;
#include <string>;

using namespace std;

int main(int argc, char *argv[])
{
	size_t number=stoul(argv[1]); //Read the input

	for (size_t idx = 1; idx != 11; ++idx)
	{
		//Print line of the multiplication table
		cout << idx << " * " << number << " = " << idx * number << '\n';
	}
}