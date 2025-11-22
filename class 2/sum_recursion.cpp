#include <iostream>
using namespace std;

int calculate_sum(int n){
    // base case
    if(n == 1){
        return 1;
    }
    return n + calculate_sum(n - 1);
}

int main() {
    int n;

    cout << "Enter number: ";
    cin >> n;      

    cout << "Sum of 1 to " << n << " = " << calculate_sum(n) << endl;

    return 0;
}
