#include <iostream>;
#include <string>;

using namespace std;

int main(int argc, char *argv[])
{

	size_t max = 1 << argc; 

	//Iterate upto a number constructed using 1 bit for every command line argument
	//all of which have the value 1;
	//Each of the bits now represents 1 of the command line (CL) arguments.
	//When it is set to 1 in an iteration its corrosponding CL argument
	//is printed.
	for (size_t idx = 0; idx != 1 << argc - 1; ++idx) 
	{	
		cout << idx + 1 << ": "; //show the line number

		size_t number = idx;
		for (size_t count = 1; count != argc; ++count)
		{	
			if (number & 1)		//Test if the least significant bit is 1
				cout << argv[count] << ' '; //If so print the corrosponding argument

			number >>= 1;		//Shift the number by 1
			if (number == 0)	// If there are no more arguments to be printed
				break;			//Exit the loop
		}
		cout << '\n';
	}
}