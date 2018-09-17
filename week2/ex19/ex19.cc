#include <iostream>;
#include <string>;

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
		size_t remainder = number % base;					//Determine the value of the next digit

		if (remainder > 9)									//If the digit is 10 or larger
			remainder = START_ALPHA + remainder - 10;		//Set it to the value of the corrosponding ASCII letter
		else
			remainder += START_NUM;							//Otherwise to the value of the corrosponding ASCII number

		outcome.insert(outcome.begin(), char(remainder));	//Prepend character to the outcome

		number /= base;										//Reduce the number for the next digit

		if (number == 0)									//If the program is done
			break;											//Exit the loop
	}

	cout << outcome << '\n';

}