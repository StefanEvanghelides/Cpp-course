#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main()
{
	string alphaCharSet;
	
	for (size_t idx = 0; idx != 256; ++idx)
	{
		char ch = char(idx);
		if (isalpha(ch))		//Determine if the char is a letter
			alphaCharSet += ch;	//If so at it to the char set
	}

	cout << alphaCharSet << '\n';
}