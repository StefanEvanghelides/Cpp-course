#include "main.ih"

void show(uint8_t *bits, size_t len)
{
	for (size_t idx = 0; idx != len; ++idx)
	{
		char toPrint = getField(bits, idx);

		if (toPrint == 1)
			toPrint = 'B';
		else if (toPrint == 2)
			toPrint = 'S';
		else
			toPrint = 'E';

		cout << toPrint << ',';
	}
	cout << '\n';
}
