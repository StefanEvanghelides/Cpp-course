#include "main.ih"

void combis(int idx, bool bits[])
{
	size_t nSelected = countSelected(bits); //count selected bits

	if (nSelected - 1 < nRequired or size_t(idx) == nTotal)
		return;

	bits[idx] = false;
	if (nSelected >= nRequired) //Show bits if Nrequired is met
		show(bits);

	combis(idx + 1, bits); //Next bit with current bit false
	

	bits[idx] = true;
	combis(idx + 1, bits);	//Next bit with current bit true
}