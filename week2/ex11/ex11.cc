#include <iostream>;
#include <string>;

using namespace std;

int main(int argc, char *argv[])
{
	size_t number=stoul(argv[1]);

	for (size_t idx = 1; idx != 11; ++idx)
	{
		cout << idx << " * " << number << " = " << idx * number << '\n';
	}
}