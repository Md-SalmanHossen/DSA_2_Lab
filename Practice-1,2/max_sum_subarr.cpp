#include <iostream>
#include <climits>
using namespace std;

int crossingSum(int arr[],int l,int mid,int h){
    int leftSum = INT_MIN, sum=0;
    for(int i=mid;i>=l;i--){
        sum += arr[i];
        if(sum > leftSum) leftSum = sum;
    }

    int rightSum = INT_MIN; sum=0;
    for(int i=mid+1;i<=h;i++){
        sum += arr[i];
        if(sum > rightSum) rightSum = sum;
    }
    return leftSum + rightSum;
}

int maxSubarray(int arr[],int l,int h){
    if(l==h) return arr[l];

    int mid=(l+h)/2;
    int left  = maxSubarray(arr,l,mid);
    int right = maxSubarray(arr,mid+1,h);
    int cross = crossingSum(arr,l,mid,h);

    return max( left, max(right,cross) );
}

int main(){
    int arr[]={5,4,-1,7,8};
    int n=5;
    cout<<"Maximum Subarray Sum = "<<maxSubarray(arr,0,n-1)<<endl;
}
