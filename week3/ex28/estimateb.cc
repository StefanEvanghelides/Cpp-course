#include "main.ih"

size_t estimateB(size_t outcome, size_t aTerm)
{
	size_t bEst = (outcome - 100 * aTerm * aTerm) / (20 * aTerm); //Estimate b

	size_t estimate = 10 * aTerm + bEst;	//Estimated sqrt of outcome

	//Reduce estimate untill sqr(estimate) <= outcome
	while (estimate * estimate > outcome)
		--estimate;

	return estimate;
}
