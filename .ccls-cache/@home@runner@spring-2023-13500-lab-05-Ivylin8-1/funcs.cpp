#include <iostream>
#include "funcs.h"
//task a
bool isDivisibleBy(int n, int d)
{
    if (d == 0){
        return false;
    }
    return n % d == 0;
}

//task b
bool isPrime(int n){
  if (n < 2){
    return false;
}
for (int i = 2; i * i <= n; i++){
  if (n % i == 0){
    return false;
  }
}
return true;
  }

//task c
int nextPrime (int n){
  int prime = n +1;
  while(!isPrime(prime)){
    prime++;
  }
  return prime;
}

//task d
int countPrimes(int a, int b){
  int count = 0;
  for (int i = a; i <= b; i++){
    if(isPrime(i)){
      count++;
    }
  }
  return count;
}
