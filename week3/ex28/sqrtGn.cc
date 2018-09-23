#include "main.ih"

size_t sqrtGn(size_t outcome)
{
	if (outcome < 100)
		return lookupSqrt(outcome);

	size_t aEst = sqrtGn(outcome / 100);
	size_t estimate = estimateB(outcome, aEst);

	return estimate;
}