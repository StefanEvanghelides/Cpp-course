#include "main.ih"

int main(int argc, char **argv)
try
{
	for (size_t idx = 1; idx != argc ; ++idx)
	{
		if (string{argv[idx]}.find('.') != string::npos)
		{	
			cout << sum(stod(argv[1]),stod(argv[2])) << '\n';
			return 0;
		}
	}
	//return int
	cout << sum(stoi(argv[1]),stoi(argv[2])) << '\n';
}
catch (...)
{
    return 1;
}
