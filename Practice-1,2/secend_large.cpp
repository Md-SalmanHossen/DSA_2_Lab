#include<iostream>
#include<algorithm>
using namespace std;

int findMax(int arr[], int size){
    if(size == 1) return arr[0];               
    return max(arr[size-1], findMax(arr, size-1));
}

int findSecondMax(int arr[], int n, int firstMax){
    if(n == 0) return -1;                      // recursion end
    if(arr[n-1] < firstMax)                   // candidate for second max
        return max(arr[n-1], findSecondMax(arr, n-1, firstMax));
    return findSecondMax(arr, n-1, firstMax); // skip equal elements
}


int main(){
    int size;
    cout<<"Enter array size: ";
    cin>>size;

    int arr[size];
    cout<<"Enter array values: ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    cout<<"Maximum Element = "<<findMax(arr,size)<<endl;
    cout<<"Second Maximum Element = "<<findSecondMax(arr,size)<<endl;

    return 0;
}
