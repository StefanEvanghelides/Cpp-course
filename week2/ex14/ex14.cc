#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
    string sentence;
    const string& whiteCharacters = " \t";

    while (getline(cin, sentence))
    {	
        // Find the first word, regarding preceding whitespace
        size_t firstWordStart = sentence.find_first_not_of(whiteCharacters);
        size_t firstWordEnd = sentence.find_first_of(
                                  whiteCharacters, firstWordStart
                              );

        // Find the last word, regarding trailing whitespace
        size_t lastWordEnd = sentence.find_last_not_of(whiteCharacters);
        size_t lastWordStart = sentence.find_last_of(
                                   whiteCharacters, lastWordEnd
                               );
        
        // check for empty or single-word strings.
        if (firstWordStart == lastWordStart || firstWordStart == string::npos)
        {
            cout << sentence << "\n";
            continue;
        }

        //replace the first word by the last word.
        const string& lastWord = sentence.substr(
                                     lastWordStart + 1,
                                     lastWordEnd - lastWordStart
                                 );
        sentence.replace(
            firstWordStart, firstWordEnd - firstWordStart, lastWord
        );

        cout << sentence << "\n";
    }

}