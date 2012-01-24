#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
   int fib_first = 1;
   int fib_second = 2;
   int temp;
   int sum = 2;
   while(fib_first + fib_second < 4000000){
	temp = fib_second;
	fib_second = fib_first + fib_second;
	fib_first = temp;
	if(fib_second % 2 == 0) sum = sum + fib_second;
   }
   cout << "The sum of the even-valued terms before the term whose value does not exceed four million is: " << sum << ".\n";

   return 0;
}
