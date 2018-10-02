#include "main.ih"

int main(int argc, char **argv)
{
    //count number of environment variables.
    size_t count = envarCount();

    //copy environment variables to array of strings.
    string envarStrings[count] = {};
    envarStringArray(count, envarStrings);
    
    quicksort(envarStrings, 0, count - 1);

    for (size_t idx = 0; idx < count; ++idx)
        cout << envarStrings[idx] << "\n";
}