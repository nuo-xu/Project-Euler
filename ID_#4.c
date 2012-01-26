#include <stdio.h>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string int_to_string (int num){
  stringstream A;
  A << num;
  return (A.str());
}

int isPalindromic(int num){
  int flag = 1;
  string numString = int_to_string(num);
  string::iterator iter_begin = numString.begin();
  string::iterator iter_end = numString.end() - 1;

  for(; iter_begin < iter_end; iter_begin++, iter_end--){
    flag = 1;
    if(*iter_begin != *iter_end){
      flag = 0;
      break;
    }
  }
  return flag;
}

int main(){
  int num;
  int largest = 0;
  for(int three_digit_first = 100; three_digit_first <= 999; three_digit_first++){
    for(int three_digit_second = 100; three_digit_second <= 999; three_digit_second++){
      num = three_digit_first * three_digit_second;
      if(isPalindromic(num)) {
        if(num > largest) largest = num;
      }
    }
  }
  cout << "The largest palindrom made from the product of two 3-digit numbers is: " << largest << "." << endl;
  return 0;
}
