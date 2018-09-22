#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main()
{
	string alphaCharSet;
	
	for (size_t idx = 0; idx != 256; ++idx)
	{
		if (isalpha(idx))		//Determine if the char is a letter
			alphaCharSet += idx;	//If so at it to the char set
	}

	cout << alphaCharSet << '\n';
}