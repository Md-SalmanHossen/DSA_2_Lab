#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


void getMinMax(vector<int>& a,int l,int h,int &mn,int &mx){
   if(l==h){
       mn=mx=a[l];
       return;
   };
   if(l==h-1){
      if(a[l]<a[h]){
         mn=a[l];
         mx=a[h];
      }else{
         mn=a[h];
         mx=a[l];
      }
   }

   int mid=(l+h)/2;
   int min1,max1,min2,max2;

   getMinMax(a,l,mid,min1,max1);
   getMinMax(a,mid+1,h,min2,max2);

   mn=min(min1,min2);
   mx=max(max1,max2);


}

int main(){
   vector<int>a={3,4,2,9,1,7};
   int mn,mx;

   getMinMax(a,0,a.size()-1,mn,mx);
   cout<<"Min = "<<mn<<" , "<<"Max = "<<mx; 
   return 0;
}

