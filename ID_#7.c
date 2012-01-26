#include <stdio.h>
#include <iostream>

using namespace std;

int isPrime(int num){
  int flag = 1;
  int count = 0;
  for(int i = 1; i <= num; i++){
    if(num % i == 0){
      count++;
    }
  }
  if(count != 2) flag = 0;
  return flag;
}

int main(){
  int count = 1;
  int i = 2;
  
  while(count != 10002){
    if(isPrime(i)){
      count++;
    }
    i++;
  }
  i--;
  cout << "The 1001st prime number is: " << i << "." << endl;
  return 0;
}
