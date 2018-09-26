#include "main.ih"

bool structCall(int argc, char **argv)
{
	//Construct a struct containing the nr of the argument, the argument
	//And whether it exists.
	ReturnValues result = combine(argc , argv); 

	if (result.ok) //If the argument exists
		cout << result.nr << ' ' << result.value << '\n'; //Print it
	else
	{											//Otherwise warn user
		cout << "Argument " << result.nr << " does not exist" << '\n'; 
		return false;
	}

	return true;
}