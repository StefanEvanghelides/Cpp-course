#include "main.ih"

ReturnValues combine(int reqNr, int argc, char **argv)
{
	ReturnValues combination;
	combination.ok = reqNr < argc;
	combination.nr = reqNr;

	if (combination.ok)
		combination.value = argv[reqNr];
	else
		combination.value = "";

	return combination;
}
