#include "PrimeFactors.h"

using namespace ::std;

bool CheckIfPrime(const int &amIPrime)
{
	for (int i = 2; i < amIPrime; ++i)
	{
		if (amIPrime % i == 0)
			return false;
	}
	return true;
}

string FindPrimeFactors(int const &findMyPrimeFactors) 
{
	int tempFindMyPrimeFactors = findMyPrimeFactors;
	string primeFactors;

	if (findMyPrimeFactors == 1)
		primeFactors = "1";

	else if (CheckIfPrime(findMyPrimeFactors))
		primeFactors = "1," + to_string(findMyPrimeFactors);

	else
	{
		for (int i = 2; i < findMyPrimeFactors / 2; ++i)
		{
			if ((CheckIfPrime(i)) && (findMyPrimeFactors % i == 0))
			{
				while (tempFindMyPrimeFactors % i == 0)
				{
					tempFindMyPrimeFactors /= i;
					primeFactors += to_string(i) + ",";
				}
			}
		}
		primeFactors.erase(primeFactors.size() - 1);
	}
	return primeFactors;
}