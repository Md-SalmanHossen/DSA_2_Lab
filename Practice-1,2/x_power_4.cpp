#include<iostream>
using namespace std;

int power(int x){
   if(x==1)return true;
   if(x==0 || x%4!=0) return false;
   return x*power(x/4);
}

int main(){
   int x;
   cout<<"Enter your numbers: "<<endl;
   cin>>x;

   if(power(x)) cout<<"Yes, power of 4";
   else cout <<"Not a power of 4";
   
   return 0;
}