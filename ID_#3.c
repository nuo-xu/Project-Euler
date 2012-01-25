#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int long long num){
  int count = 0;
  for(int i = 1; i <= num; i++){
    if(num % i == 0) count++;
  }
  if(count == 2) return true;
  else return false;
}

int main(){
  signed long long int num = 600851475143;  // note that this is a long long int
  long int sqrt_root_num = sqrt (num);
  cout << sqrt_root_num << endl;
  int biggest = 0;
  for(int long long i = 2; i < sqrt_root_num; i++){ // we want to find a prime factor.
    // The definition of a prime number is it cannot be divided by any number excepted
    // one and itself. Also a number is prime if it can't be divided by any prime number
    // less than or equal to its square root. Additionally, 2 is a prime number
    // So the largest prime factor of a number is the number itself(if it is prime)
    // or a value less than or equal to its square root.
    // Thus we could sqrt(600851475143) = 775147 to prevent the memory running issue
    if(num % i == 0 && isPrime(i)) biggest = i;
  }
  cout << "600851475143's biggest prime factor is: " << biggest << ".\n";
  return 0;
  // if we are not taking the square root of the input number, we might need to use other
  // more efficient algorithems to solve the memory running issue.
}
