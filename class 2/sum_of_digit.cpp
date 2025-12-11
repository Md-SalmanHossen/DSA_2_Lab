// Calculate the sum of digits of a given number n.

#include <iostream>
using namespace std;

int sum_of_digit(int n){
    // base case
   //  if(n == 0) return 0;
   if(n<10) return n;
   return n%10 + sum_of_digit(n/10);
}

int main() {
   int n;
   cout << "Enter number: ";
   cin >> n;      
   cout << "Sum of digit " << n << " is = " << sum_of_digit(n) << endl;
   return 0;
}
