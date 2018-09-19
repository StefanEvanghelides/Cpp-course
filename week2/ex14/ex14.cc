#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
	string sentence;
	const string& whiteCharacters = " \t";

	while(!cin.eof())
    {
		getline(cin, sentence);

		if (sentence.empty())
		{ // If the sentence is empty, there is nothing to process/output
			continue;
		}

		// Trim the strings from starting and ending whitespaces
		sentence.erase(0, sentence.find_first_not_of(whiteCharacters));
		sentence.erase(sentence.find_last_not_of(whiteCharacters) + 1);


		sentence = sentence.substr(sentence.find_last_of(whiteCharacters) + 1, string::npos) + sentence.substr(sentence.find_first_of(whiteCharacters), string::npos);

		cout << sentence << endl;
    }

}