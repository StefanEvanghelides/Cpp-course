#include <iostream>

using namespace std;

char const str[] =
R"(^\\s+Encryption key:(\\w+)
^\\s+Quality=(\\d+)
^\\s+E?SSID:\"([[:print:]]+)\"
^\\s+ssid=\"([[:print:]]+)\"
)";

int main(int argv, char** argc)
{
    std::cout << str;
}