#include<iostream>
#include<cctype>
using namespace std;

bool isPalindrome(string s, int l, int r){
    while(l < r && s[l] == ' ') l++;  // skip left spaces
    while(l < r && s[r] == ' ') r--;  // skip right spaces

    if(l >= r) return true;
    
    if(tolower(s[l]) != tolower(s[r])) 
        return false;
    
    return isPalindrome(s, l+1, r-1);
}

int main(){
    string s;
    cout<<"Enter your string: ";
    getline(cin, s);   // take full input
    
    if(isPalindrome(s, 0, s.length()-1))
        cout<<"Palindrome ";
    else
        cout<<"Not Palindrome";

    return 0;
}
