#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
	string sentence;
	const string& whiteCharacters = " \t";

	while (getline(cin, sentence))
    {		
    	int firstIdx = sentence.find_first_of(whiteCharacters);
		int lastIdx = sentence.find_last_of(whiteCharacters);
		const string& lastWord = sentence.substr(lastIdx + 1);
		sentence.replace(0, firstIdx, lastWord);

		cout << sentence << endl;
    }

}