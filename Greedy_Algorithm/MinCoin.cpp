#include<iostream>
using namespace std;

int main(){
   int value;
   cout<<"Enter your change "<<endl;
   cin >>value;

   int coins[]={1000,500,50,20,10,5,2,1};
   int n=sizeof(coins)/sizeof(coins[0]);

   cout<<"Coin used ";
   int count=0;


   for(int i=0;i<n;i++){
      while(value>=coins[i]){
         value-=coins[i];
         cout<<coins[i]<<" ";
         count++;
      }
   }

   cout << "\nMinimum number of coins/notes = " << count << endl;


   return 0;
}