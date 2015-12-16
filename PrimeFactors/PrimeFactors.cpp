#include "PrimeFactors.h"

using namespace ::std;

bool CheckIfPrime(const int &amIPrime)
{
	if ((amIPrime % 2 == 0) && (amIPrime != 2))
		return false;
	for (int i = 3; i < amIPrime; i += 2)
	{
		if (amIPrime % i == 0)
			return false;
	}
	return true;
}

string FindPrimeFactors(const int &findMyPrimeFactors)
{
	int tempFindMyPrimeFactors = findMyPrimeFactors;
	string primeFactors;

	if (findMyPrimeFactors == 1)
	{
		primeFactors = "1";
	}
	else if (CheckIfPrime(findMyPrimeFactors))
	{
		primeFactors = "1," + to_string(findMyPrimeFactors);
	}
	else
	{
		for (int i = 2; i < findMyPrimeFactors / 2; ++i)
		{
			while ((tempFindMyPrimeFactors % i == 0) && (CheckIfPrime(i)))
			{
				tempFindMyPrimeFactors /= i;
				primeFactors += to_string(i);
				if (tempFindMyPrimeFactors != 1)
					primeFactors += ",";
			}
		}
	}
	return primeFactors;
}