#include <iostream>
using namespace std;

int factorial(int n){
    // base case
    if(n == 1 ||n==0){
        return 1;
    }
    return n * factorial(n-1);
}

int main() {
    int n;

    cout << "Enter number: ";
    cin >> n;      

    cout << "factorial of " << n << " is "<< factorial(n) << endl;

    return 0;
}
