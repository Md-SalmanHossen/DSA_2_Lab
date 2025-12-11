//Find if a number is a power of 4.
//Find if a number is a power of n.

#include <iostream>
using namespace std;

bool isPower(int n, int a){
    // if n becomes 1, it is a power
    if(n == 1) return true;

    // if n is not divisible or becomes 0, not power
    if(n % a != 0 || n == 0) return false;

    return isPower(n / a, a);
}

int main() {
    int n;

    cout << "Enter number to test: ";
    cin >> n;

    if(isPower(n, 4))
        cout << n << " is a power of 4" << endl;
    else
        cout << n << " is NOT a power of 4" << endl;

    return 0;
}
