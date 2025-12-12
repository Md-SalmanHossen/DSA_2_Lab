/*
2. Check if it is possible to survive on an Island.
Jarif got stuck on an island. There is only one shop on this island, and it is open on all days of the week except for Sunday. Consider following constraints: 
N – The maximum unit of food you can buy each day. 
S – Number of days you are required to survive. 
M – Unit of food required each day to survive. 
Currently, it’s Monday, and he needs to survive for the next ‘S’ days. 
Find the minimum number of days on which you need to buy food from the shop so that he can survive the next ‘S’ days or determine that it isn’t possible to survive. 
Example 1: 
Input: S = 10, N = 16, M = 2 
Output: 2 
*/

#include<iostream>
#include<cmath>
using namespace std;

int main(){
   int s,n,m;
   cout<<"Enter your values: "<<endl;
   cin>>s>>n>>m;

   int total_food_need=s*m;
   int sundays=s/7;
   int shopping_days=s-sundays;

   if(shopping_days*n<total_food_need){
      cout<<-1<<endl;
   }
   else{
      int min_days=(total_food_need+n-1)/n;
      cout<<min_days;
   }
   return  0;
}