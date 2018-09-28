#include "main.ih"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        usage("wc");
        return 0;
    }

    switch(argv[1][1])
    {
        case 'c':
            count_characters();
        break;

        case 'w':
            count_words();
        break;

        case 'l':
            count_lines();
        break;

        default:
            usage("wc");
        break;
    }
}
