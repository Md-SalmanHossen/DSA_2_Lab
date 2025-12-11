#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

bool isPrime(int x){
   if(x<2) return false;
   for(int i=2;i*i<x;i++){
      if(x%i==0) return false;
   }
   return true;
}
int countPrime(vector<int>& a,int s,int e){
   if(s==e) return isPrime(a[s]);
   int mid=(s+e)/2;
   return countPrime(a,s,mid)+countPrime(a,mid+1,e);
}
int main(){
   vector<int>a={1,2,3,4,5,5,6,6,7,8,12,19,21,29,51,91};
   int primeCount=countPrime(a,0,a.size()-1);
   cout<<"Total Prime Count: "<<primeCount;
   return 0;
}