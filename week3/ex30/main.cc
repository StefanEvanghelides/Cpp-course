#include "main.ih"

int main(int argc, char **argv)
try
{
    callValue(argv[0]);
    callRef(argv[0]);
}
catch (...)
{
    return 1;
}
