#include <iostream>
#include <string>

using namespace std;

enum ascii{
	START_ALPHA = 97,
	START_NUM = 48
};


int main(int argc, char *argv[])
{

	size_t base = stoul(argv[1]);
	size_t number = stoul(argv[2]);
	string outcome;

	cout << number << ", displayed using radix " << base << " is: ";

	while (true)
	{
		size_t remainder = number % base;	//Get the value of the next digit

		//Set remainder to the corrosponding ASCII symbol
		if (remainder > 9)								
			remainder = START_ALPHA + remainder - 10;	
		else																				
			remainder += START_NUM;	

		outcome.insert(outcome.begin(), char(remainder));	
		//Prepend character to the outcome

		number /= base;						//Reduce the number for the next digit

		if (number == 0)					//If the program is done
			break;									//Exit the loop
	}

	cout << outcome << '\n';

}