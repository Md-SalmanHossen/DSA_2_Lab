#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int getEventCount(vector<int>& a,int l,int h){
   if(l==h) return a[l]%2==0;
   int mid=(l+h)/2;
   return getEventCount(a,l,mid)+getEventCount(a,mid+1,h);
}

int main(){
   vector<int>a={2,3,4,5,6,7,8,9,12,22,33,12,55};
   int count_vent=getEventCount(a,0,a.size()-1);
   cout<<"Event number= "<<count_vent;
   return 0;
}