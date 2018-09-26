#include "main.ih"

extern char** environ;

int main(int argc, char **argv)
try
{
    //count number of environment variables.
    size_t environ_count = 0;
    while (environ[environ_count] != nullptr)
        environ_count += 1;

    //copy environment variables to array of strings.
    string environ_strings[environ_count] = {};
    for (size_t idx = 0; idx < environ_count; ++idx)
        environ_strings[idx] = str_to_lower(string{environ[idx]});

    quicksort(environ_strings, 0, environ_count - 1);

    for (size_t idx = 0; idx < environ_count; ++idx)
        cout << environ_strings[idx] << "\n";
}
catch (...)
{
    return 1;
}
