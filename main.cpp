#include <iostream>
#include "funcs.h"

int main(){

  std::cout << "isDivisibleBy(100, 25): " << isDivisibleBy(100, 25) << std::endl;

	std::cout << "isPrime(2): " << isPrime(2) << std::endl;

	std::cout << "nextPrime(12): " << isPrime(12) << std::endl;

  	std::cout << "countPrimes(2,8): " << countPrimes(2,8) << std::endl;

    	std::cout << "isTwinPrime(14): " << isTwinPrime(14) << std::endl;
   	std::cout << "isTwinPrime(29): " << isTwinPrime(29) << std::endl;

  std::cout << "nextTwinPrime(13): " << nextTwinPrime(13) << "\n";

  std::cout << "largestTwinPrime(5, 18): " << largestTwinPrime(5, 18) << "\n";
  
	return 0;
  }

