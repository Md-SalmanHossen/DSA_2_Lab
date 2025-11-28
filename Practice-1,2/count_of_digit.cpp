#include<iostream>
using namespace std;

int sumCount(int n){
   if(n==0) return 0;
   return 1 +sumCount(n/10);
}

int main(){
   int n;
   cout<<"Enter your number ";
   cin>>n;
   cout<<"Count of digit is "<<sumCount(n);
   return 0;
}