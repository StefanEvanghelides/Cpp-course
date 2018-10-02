#include "main.ih"

int main(int argc, char **argv)
{	
	for (int idx = 1; idx != argc ; ++idx)
	{
		if (string{argv[idx]}.find('.') != string::npos) //Check for a . in argv
		{	
			double inputVal[argc - 1];	
			
			for (int idx = 1; idx != argc ; ++idx)
			{
				inputVal[idx - 1] = stod(argv[idx]); //Convert input to double
			}

			cout << sum(inputVal, argc - 1) << '\n';
			return 0;
		}
	}

	int inputVal[argc - 1]; 

	for (int idx = 1; idx != argc ; ++idx)
	{
		inputVal[idx - 1] = stoi(argv[idx]); //Convert input to int
	}

	cout << sum(inputVal, argc - 1) << '\n';
}