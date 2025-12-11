// Suppose that, you are at 0th stair and you have to reach at nth stair. Each time you can climb 1 or 2 steps. Find out the total number of distinct ways you can climb from 0th to nth stair.

#include <iostream>
using namespace std;

int stairClimb(int n){
    // base case
    if(n == 1 ||n==0){
        return 1;
    }
    return stairClimb(n-1)+stairClimb(n-2);
}

int main() {
    int n;

    cout << "Enter number: ";
    cin >> n;      

    cout << "stairClimb of way " << n << " is "<< stairClimb(n) << endl;

    return 0;
}
