#include <iostream>
#include <string>

using namespace std;

int main()
{

    int value = 0;

    while (true)
    {
        std::cout << "> ";
        string line;
        getline(cin, line);

        if(line == "ret") return 0;

        string instruction = line.substr(0, line.find(' '));
        int number = stoi(line.substr(line.find(' ') + 1));
        std::cout << "instruction: '" << instruction << "', number: '" << number << "'\n";

        switch (instruction[0])
        {
            case 's':
                if(instruction == "sto")
                    value = number;
                else if(instruction == "sub")
                    value -= number;
                else
                    cout << "No instruction '" << instruction << "'\n";
            break;
            case 'a':
                if(instruction == "add")
                    value += number;
                else
                    cout << "No instruction '" << instruction << "'\n";
            break;
            case 'm':
                if(instruction == "mul")
                    value *= number;
                else
                    cout << "No instruction '" << instruction << "'\n";
            break;
            case 'd':
                if(instruction == "div")
                {
                    if(number == 0)
                        cout << "Error: Cannot divide by zero.\n";
                    else
                        value /= number;
                }
                else
                    cout << "No instruction '" << instruction << "'\n";
            break;
            default:
                cout << "No instruction '" << instruction << "'\n";
            break;
        }
        cout << "Result: " << value << "\n";
    }
}