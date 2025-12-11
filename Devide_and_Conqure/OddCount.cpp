#include<iostream>
#include<vector>
using namespace std;

int getOddCount(vector<int>& a,int s,int e){
   if(s==e) return a[s]%2!=0;
   int mid=(s+e)/2;

   return getOddCount(a,s,mid)+getOddCount(a,mid+1,e);
}

int main(){
   vector<int>a={12,2,3,4,5,6,6,7,1,11};
   int oddCount=getOddCount(a,0,a.size()-1);
   cout<<"Odd count is: "<<oddCount;
   return 0;
}