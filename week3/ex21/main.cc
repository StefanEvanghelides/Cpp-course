#include "main.ih"

int main(int argc, char **argv)
try
{
	if (argc < 2)
	{
		cout << "Missing arguments\n";
		return 0;
	}

	if (!structCall(argc, argv))
		return 0;

	boundCall(argc, argv);
}
catch (...)
{
    return 1;
}
