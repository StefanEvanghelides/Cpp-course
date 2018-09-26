#include "main.ih"

ReturnValues combine(int argc, char **argv)
{
	int reqNr = stoi(argv[1]); //Convert requestnr to int

	ReturnValues combination;
	combination.ok = reqNr < argc;	//Determine whether requestnr exists 
									//and store result
	combination.nr = reqNr;

	if (combination.ok)
		combination.value = argv[reqNr - 1];
	else
		combination.value = "";

	return combination;
}
