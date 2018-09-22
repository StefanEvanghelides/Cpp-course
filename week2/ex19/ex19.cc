#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{

	size_t base = stoul(argv[1]);
	size_t number = stoul(argv[2]);
	string outcome;

	cout << number << ", displayed using radix " << base << " is: ";

	do
	{
		size_t remainder = number % base;	//Get the value of the next digit

		//Set remainder to the corrosponding ASCII symbol
		remainder = (remainder > 9 ? 'a' + remainder - 10 : remainder + '0');

		outcome.insert(outcome.begin(), char(remainder));	
		//Prepend character to the outcome

		number /= base;						//Reduce the number for the next digit

	}
	while(number != 0);

	cout << outcome << '\n';

}