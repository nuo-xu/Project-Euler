#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
  int sumOfSquares = 0;
  int sum = 0;
  int suqareOfSum = 0;
  for(int i = 1; i <= 100; i++){
    sumOfSquares = sumOfSquares + i*i;
    sum = sum + i;
  }
  suqareOfSum = sum * sum;
  int diff = suqareOfSum - sumOfSquares;
  cout << "The difference between the sum of the squares of the first one hundred natural numbers and the square of the sum is: " << diff << "." << endl;
  return 0;
}
