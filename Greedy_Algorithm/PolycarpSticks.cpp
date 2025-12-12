#include<iostream>
using namespace std;

int main(){
   int a,b;
   cout<<"Enter your values ";
   cin>> a >>b;//sticks and diamonds
   
   int dollars=0;

   //craft shovels first
   int shovels=min(a/2,b);
   a-=shovels*2;
   a-=shovels;

   //craft swords with reaming
   int swords=min(a,b/2);
   dollars=shovels+swords;

   cout<<dollars;

   return 0;
}