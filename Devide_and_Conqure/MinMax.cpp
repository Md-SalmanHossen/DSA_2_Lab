#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Pair {
    int min;
    int max;
};

Pair getMinMax(const vector<int>& arr, int low, int high){
    Pair result, leftSide, rightSide;
    
    // Base Case 1: If there is only one element
    if (low == high){
        result.max = arr[low];
        result.min = arr[low];
        return result;
    }

    // Base Case 2: If there are two elements
    if (high == low + 1){
        if (arr[low] > arr[high]) {
            result.max = arr[low];
            result.min = arr[high];
        }else{
            result.max = arr[high];
            result.min = arr[low];
        }
        return result;
    }

    // If there are more than 2 elements, Divide the array
    int mid = low + (high - low) / 2;
    leftSide = getMinMax(arr, low, mid);
    rightSide = getMinMax(arr, mid + 1, high);

    // Conquer: Compare the results of the two halves
    result.min = (leftSide.min < rightSide.min) ? leftSide.min : rightSide.min;
    result.max = (leftSide.max > rightSide.max) ? leftSide.max : rightSide.max;

    return result;
}

int main() {
    vector<int> arr = {1000, 11, 445, 1, 330, 3000, -5};
    int n = arr.size();

    Pair minmax = getMinMax(arr, 0, n - 1);

    cout << "Minimum element is: " << minmax.min << endl;
    cout << "Maximum element is: " << minmax.max << endl;

    return 0;
}