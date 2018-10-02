#include "main.ih"

int main(int argc, char **argv)
{
	string ferry;

	if(argc == 3)
		srandom(stoul(argv[2]));

	fillFerry(ferry, stoul(argv[1]));

	cout << ferry;
}