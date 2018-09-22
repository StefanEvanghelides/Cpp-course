#include "main.ih"

void show(bool bits[])
{
	for (size_t idx = 0; idx != nTotal; ++idx)
	{
		if (bits[idx])
			cout << idx << ' ';
	}
	cout << '\n';
}