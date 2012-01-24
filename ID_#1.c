#include <stdio.h>
#include <iostream>

using namespace std;

bool multiplier_three_five(int number){
   if(number%3 == 0 || number%5 == 0) return true;
   else return false;
}

int main(){
   int sum = 0;
   for (int num = 0; num < 1000; num++){
   	if(multiplier_three_five(num)){
	    sum = sum + num;
	}
   }
   cout << "The total sum of all natural numbers below one thousand that are multiples of 3 or 5 is: " << sum << ".\n"; 
   return 0;
}


