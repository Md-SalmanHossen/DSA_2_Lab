#include<iostream>
using namespace std;

int power(int x,int n){
   if(n==0)return 1;
   return x*power(x,n-1);
}

int main(){
   int x,n;
   cout<<"Enter your numbers: "<<endl;
   cin>>x>>n;

   cout<<"The result is: "<<power(x,n);
   return 0;
}