#include "main.ih"

int main(int argc, char **argv)
try
{
	data(stoul(argv[1]),stoul(argv[2])); 
	//Set the global variables for total and required arguments

	bool bits[nRequired];
	for (size_t idx =0; idx != nTotal; ++idx)
		bits[idx] = true;

	show(bits); //All elements selected should always be showed
	
	combis(0, bits);

}
catch (...)
{
    return 1;
}
