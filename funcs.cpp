#include <iostream>
#include "funcs.h"

//task a
bool isDivisibleBy(int n, int d)
{
     if (n % d == 0)
{
  return true;
}
else
{
return false;
}
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
  int primes = 0;
  for (int i = a; i <= b; i++){
    if(isPrime(i)){
      primes++;
    }
  }
  return primes++;
}

//task e
bool isTwinPrime (int n){
  if(n < 2){
    return false;
  }
  for (int i =2; i*i <=n; i++){
    if (n % i == 0){
      return false;
    }
  }
  return true;
}

//task f
int nextTwinPrime(int n){
  int i = n +1;
  while (!isTwinPrime(i)){
    i++;
  }
      return i;
  }
//task g
int largestTwinPrime(int a, int b){
int largest = -1;
  for (int i = b; i >= a; i++){
    largest = i;
    }
  return largest;
}