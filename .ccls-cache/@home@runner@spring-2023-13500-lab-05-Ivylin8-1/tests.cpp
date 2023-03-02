#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

TEST_CASE("Is it true")
{
    CHECK(isDivisibleBy(100,25)==true);
}

TEST_CASE("Is it prime")
{
  CHECK(isPrime(2) == true);
}

TEST_CASE("Next prime")
{
  CHECK(nextPrime(12) == true);
}

TEST_CASE("Count Prime in range")
{
  CHECK(countPrimes(2,8) == 6);
}