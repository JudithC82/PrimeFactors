#include "gtest/gtest.h"
#include "PrimeFactors.h"

using namespace ::std;

TEST(PrimeFactors, If_a_number_is_prime_return_true)
{
	EXPECT_TRUE(CheckIfPrime(2));
	EXPECT_TRUE(CheckIfPrime(7));
	EXPECT_TRUE(CheckIfPrime(1223));
	EXPECT_TRUE(CheckIfPrime(1669));
	EXPECT_TRUE(CheckIfPrime(2017));
	EXPECT_TRUE(CheckIfPrime(12391));
}

TEST(PrimeFactors, If_a_number_is_not_prime_return_false)
{
	EXPECT_FALSE(CheckIfPrime(10));
	EXPECT_FALSE(CheckIfPrime(75685));
	EXPECT_FALSE(CheckIfPrime(96512));
	EXPECT_FALSE(CheckIfPrime(100008));
	EXPECT_FALSE(CheckIfPrime(5487566));
}

TEST(PrimeFactors, if_a_number_is_prime_return_that_number_and_1)
{
	ASSERT_EQ("1,17", FindPrimeFactors(17));
}

TEST(PrimeFactors, find_the_prime_factors_of_12)
{
	ASSERT_EQ("2,2,3", FindPrimeFactors(12));
}

TEST(PrimeFactors, find_the_prime_factors_of_8)
{
	ASSERT_EQ("2,2,2", FindPrimeFactors(8));
}

TEST(PrimeFactors, find_the_prime_factors_of_3485)
{
	ASSERT_EQ("5,17,41", FindPrimeFactors(3485));
}

TEST(PrimeFactors, return_1_when_1_is_entered)
{
	ASSERT_EQ("1", FindPrimeFactors(1));
}

TEST(PrimeFactors, find_the_prime_factors_of_2)
{
	ASSERT_EQ("1,2", FindPrimeFactors(2));
}

TEST(PrimeFactors, find_the_prime_factors_of_45)
{
	ASSERT_EQ("3,3,5", FindPrimeFactors(45));
}

TEST(PrimeFactors, find_the_prime_factors_of_300)
{
	ASSERT_EQ("2,2,3,5,5", FindPrimeFactors(300));
}