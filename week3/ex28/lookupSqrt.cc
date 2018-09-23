#include "main.ih"

size_t lookupSqrt(size_t num) //Switch
{
	switch (num)
	{
		case 0:
			return 0;
		case 1 ... 3:
			return 1;
		case 4 ... 8:
			return 2;
		case 9 ... 15:
			return 3;
		case 16 ... 24:
			return 4;
		case 25 ... 35:
			return 5;
		case 36 ... 48:
			return 6;
		case 49 ... 63:
			return 7;
		case 64 ... 80:
			return 8;
		case 81 ... 99:
			return 9;
	}
	return -1;
}

// size_t lookupSqrt(size_t num) //array
// {
// 	size_t lookupArray[100] =  {0,	//Every sqrt occurs 2 more than the one before it
// 								1,1,1,
// 								2,2,2,2,2,
// 								3,3,3,3,3,3,3,
// 								4,4,4,4,4,4,4,4,4,
// 								5,5,5,5,5,5,5,5,5,5,5,
// 								6,6,6,6,6,6,6,6,6,6,6,6,6,
// 								7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,
// 								8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,
// 								9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9};

// 	return lookupArray[num];
// }