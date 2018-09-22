#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
	string sentence;
	const string& whiteCharacters = " \t";

	while (getline(cin, sentence))
    {
		// Trim the strings from starting and ending whitespaces
		sentence.erase(0, sentence.find_first_not_of(whiteCharacters));
		sentence.erase(sentence.find_last_not_of(whiteCharacters) + 1);
		
		// If the sentence is empty, there is nothing to process/output
		if (sentence.empty())
			continue;

		//Replace the first word with the last word
		sentence = sentence.substr(
			sentence.find_last_of(whiteCharacters) + 1, string::npos) 
			+ sentence.substr(
			sentence.find_first_of(whiteCharacters), string::npos);

		cout << sentence << endl;
    }

}