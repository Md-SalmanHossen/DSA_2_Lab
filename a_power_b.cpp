//Calculate a to the power b

#include <iostream>
using namespace std;

int power(int a,int b){
    // base case
   if(b == 0) return 1;
   if(b == 1) return a;

   return a*power(a,b-1);
}

int main() {
   int a, b;
    
    cout << "Enter base (a) and exponent (b): ";
    cin >> a >> b;        
    
    cout << a << " raised to the power " << b << " is = " << power(a, b) << endl;

    return 0;
}
