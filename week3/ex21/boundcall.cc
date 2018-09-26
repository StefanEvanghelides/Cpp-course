#include "main.ih"

void boundCall(int argc, char **argv)
{
	ReturnValues &&result = combine(argc , argv); //Get a struct from combine

	if (result.ok)
		cout << result.nr << ' ' << result.value << '\n';
}
