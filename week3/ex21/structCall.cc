#include "main.ih"

bool structCall(int argc, char **argv)
{
	ReturnValues result = combine(1, argc , argv);

	if (result.ok)
		cout << result.nr << ' ' << result.value << '\n';
	else
	{
		cout << "Argument " << result.nr << " does not exist" << '\n';
		return false;
	}

	return true;
}