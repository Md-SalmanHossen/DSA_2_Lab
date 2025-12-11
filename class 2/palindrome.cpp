#include <iostream>
#include <string>
using namespace std;

bool palindrome(string str, int l, int h) {
    // base case: 
    if (l >= h) return true;
    if (str[l] != str[h]) return false;
    return palindrome(str, l + 1, h - 1);
}

int main() {
    string s = "abeeba";

    if (palindrome(s, 0, s.length() - 1)) cout << "palindrome";
    else cout << "not palindrome";

    return 0;
}
