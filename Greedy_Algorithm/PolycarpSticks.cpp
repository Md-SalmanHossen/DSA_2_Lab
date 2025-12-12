#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter sticks and diamonds: ";
    cin>> a >>b;

    int dollars=0;

    // craft shovels first (2 sticks + 1 diamond)
    int shovels = min(a/2, b);
    a -= shovels*2;  // sticks used
    b -= shovels;    // diamonds used

    // craft swords with remaining (1 stick + 2 diamonds)
    int swords = min(a, b/2);
    a -= swords;     // sticks used
    b -= swords*2;   // diamonds used

    dollars = shovels + swords;

    cout << dollars << endl;

    return 0;
}
