#include "main.ih"

void show(uint8_t *bits, size_t len)
{
	for (size_t idx = 0; idx != len; ++idx)
	{
		switch (getField(bits, idx))
		{
			case B:
				cout << 'B';
				break;
			case S:
				cout << 'S';
				break;
			case E:
				cout << 'E';
				break;
		}

		cout << ',';
	}
	cout << '\n';
}
