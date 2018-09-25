#include <iostream>
#include <string>

using namespace std;

enum NumValue                           // Values of the commands in base 36.
{
	STO = 37356,
	ADD = 13441,
	SUB = 37379,
	MUL = 29613,
	DIV = 17527,
	RET = 35525
};

int main()
{

    int stored = 0;

    while (true)
    {
        std::cout << "> ";
        string line;
        getline(cin, line);

        if (line == "ret") return 0;

        int value = stoi(line.substr(line.find(' ') + 1));

        //convert the command to a number in base 36, base 36 because the
        //highest single digit number is then 'z'.
        switch (stoul(line.substr(0, line.find(' ')), 0, 36))
        {
            case STO:
                stored = value;
            break;
            case ADD:
                stored += value;
            break;
            case SUB:
                stored -= value;
            break;
            case MUL:
                stored *= value;
            break;
            case DIV:
                if(value == 0)
                {
                    std::cout << "Error: cannot divide by zero.\n";
                    break;
                }
                stored /= value;
            break;
            default:
                cout << "Invalid command";
            break;
        }
        cout << "Result: " << stored << "\n";
    }
}