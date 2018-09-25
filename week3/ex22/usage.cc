//                     usage.cc

#include "main.ih"

void usage(std::string const &progname)
{
    cout << "\n" <<
    progname << " by " << Icmbuild::author << "\n" <<
    progname << " V" << Icmbuild::version << " " << Icmbuild::years << "\n"
    "\n"
    "Usage: " << progname << " option\n"
    "Where:\n"
    "   option - argument:\n"
    "      -c: counts characters in the inputstream\n"
    "      -w: counts words in the inputstream\n"
    "      -l: counts lines in the inputstream\n"
    "\n";
}