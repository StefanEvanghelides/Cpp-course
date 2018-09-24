#include "main.ih"

int main(int argc, char **argv)
try
{
    if (argc != 2)
    {
        usage("wc");
        return 0;
    }

    if (argv[1] == "-c"s)
        count_characters();
    else if(argv[1] == "-w"s)
        count_words();
    else if(argv[1] == "-l"s)
        count_lines();
    else
        usage("wc");
}
catch (...)
{
    return 1;
}
