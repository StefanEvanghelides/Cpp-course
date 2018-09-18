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

			size_t firstIdx = sentence.find_first_of(whiteCharacters);
			size_t lastIdx = sentence.find_last_of(whiteCharacters);

			string firstWord = sentence.substr(0, firstIdx);
			string lastWord = sentence.substr(lastIdx + 1);

			sentence.replace(lastIdx + 1, firstIdx, firstWord);
			if (lastWord.length() > firstWord.length())
			{ // If the final word is too big, erase the extra characters
				sentence.erase(lastIdx + 1 + firstIdx);
			}
			sentence.replace(0, firstIdx, lastWord);

			cout << sentence << endl;
    }

}