#include <stdio.h>
#include <iostream>

using namespace std;

int isEvenlyDivisible(int num){
  int flag = 1;
  for(int i = 1; i <= 20; i++){
    if(num % i != 0){
      flag = 0;
      break;
    }
  }
  return flag;
}

int main(){
  int smallest = 0;
  for(int i = 2520; ; i++){ // according to the problem we know that 
    // 2520 is the smallest number that can be divided by each the numbers
    // from 1 to 10 without any remainder. Thus we know that the smallest
    // positve number that is evenly divisible by all of the numbers from
    // 1 to 20 must be greater than 2520
   if(isEvenlyDivisible(i)){
     smallest = i;
     break;
   }
  }
  cout << "The smallest positive number that is evenly divisible by all the number from 1 to 20 is: " << smallest << "." << endl;
  return 0;
}
