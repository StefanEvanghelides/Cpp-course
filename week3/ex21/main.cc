#include "main.ih"

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		cout << "Missing arguments\n";
		return 0;
	}

	if (structCall(argc, argv))
		boundCall(argc, argv);
}