#include "main.ih"

size_t sqrtGn(size_t outcome)
{
	if (outcome < 100)
		return lookupSqrt(outcome);

	size_t aEst = sqrtGn(outcome / 100);//Determine int sqrt for outcome
										//without the 2 least sign digits



	size_t estimate = estimateB(outcome, aEst);

	return estimate;
}