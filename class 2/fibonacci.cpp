#include <iostream>
using namespace std;

int fibonacci(int n){
    // base case
    if(n == 1 ||n==0){
        return n;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}

int main() {
    int n;

    cout << "Enter number: ";
    cin >> n;      

    cout << "fibonacci of " << n << " is "<< fibonacci(n) << endl;

    return 0;
}
