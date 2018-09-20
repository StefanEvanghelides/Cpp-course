#include "main.ih"

int main(int argc, char **argv)
try
{
	if(!structCall(argc, argv))
		return 0;

	boundCall(argc, argv);
}
catch (...)
{
    return 1;
}
