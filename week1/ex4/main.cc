#include <iostream>

using namespace std;

char const str[] =
R"delim(^\s+Encryption key:(\w+)
^\s+Quality=(\d+)
^\s+E?SSID:\"([[:print:]]+)"
^\s+ssid=\"([[:print:]]+)"
)delim";

int main()
{
    std::cout << str;
}