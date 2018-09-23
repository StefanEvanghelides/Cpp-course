#include "main.ih"

int main(int argc, char **argv)
try
{
	while (true)
	{
		cout << "? ";
		string input;
		getline(cin, input);

		size_t numIn = stoul(input);
		size_t estimate = sqrtGn(numIn);
		estimate = nextSqrt(numIn, estimate);

		cout << "sqrt: " << estimate << " (" << estimate * estimate << ")\n";
	}
}
catch (...)
{
    return 1;
}
