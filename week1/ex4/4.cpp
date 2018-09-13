#include <iostream>

char const raw[] = R"(^\\s+Encryption key:(\\w+)\n
                 ^\\s+Quality=(\\d+)\n
                 ^\\s+E?SSID:\"([[:print:]]+)\\n
                 ^\\s+ssid=\"([[:print:]]+)\\n)";

int main(int argc, char *argv[], char *envp[])
{
	    std::cout << raw << std::endl;
}