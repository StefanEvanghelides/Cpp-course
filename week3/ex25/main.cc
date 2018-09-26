#include "main.ih"

int main(int argc, char **argv)
try
{
	string ferry = "";
	size_t size = stoul(argv[1]);

	fillFerry(ferry, size);

	cout << ferry;
}
catch (...)
{
    return 1;
}
