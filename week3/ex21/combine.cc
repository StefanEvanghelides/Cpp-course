#include "main.ih"

ReturnValues combine(int argc, char **argv)
{
	size_t reqNr = stoi(argv[1]);

	ReturnValues combination;
	combination.ok = reqNr <= static_cast<size_t>(argc);
	combination.nr = reqNr;

	if (combination.ok)
		combination.value = argv[reqNr - 1];

	return combination;
}
