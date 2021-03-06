#include "main.ih"

void insertPerson(string &ferry, size_t number)
{
	string eyecolors[] = {"brown", "blue"};

	size_t firstBlue = ferry.find("blue"); //Find first blue eyed person

	//Either append the person to the end 
	//Or insert the new person before the first blue-eyed person
	if (firstBlue == string::npos)
		ferry += eyecolors[rand() % 2] + " (" + to_string(number) + ")\n";
	else
		ferry.insert(
			firstBlue, 
			eyecolors[rand() % 2] + " (" + to_string(number) + ")\n"
		);
}