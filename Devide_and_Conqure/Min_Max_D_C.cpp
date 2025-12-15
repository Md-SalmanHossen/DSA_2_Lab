#include <iostream>
#include <algorithm> 
#include <vector>

struct MinMaxResult {
    int min;
    int max;
};


MinMaxResult findMinMax(const std::vector<int>& arr, int low, int high) {
    MinMaxResult result;

    if (low == high) {
        result.min = arr[low];
        result.max = arr[low];
        return result;
    }

    if (high == low + 1) {
        if (arr[low] > arr[high]) {
            result.max = arr[low];
            result.min = arr[high];
        } else {
            result.max = arr[high];
            result.min = arr[low];
        }
        return result;
    }

    
    int mid = low + (high - low) / 2; 

    MinMaxResult leftResult = findMinMax(arr, low, mid);
    MinMaxResult rightResult = findMinMax(arr, mid + 1, high);


    // Combine Min
    result.min = std::min(leftResult.min, rightResult.min);

    // Combine Max
    result.max = std::max(leftResult.max, rightResult.max);
    
    return result;
}

int main() {
    std::vector<int> data = {22, 13, 5, 80, 15, 7, 99, 1};
    int n = data.size();

    if (n == 0) {
        std::cout << "The array is empty." << std::endl;
        return 0;
    }

    MinMaxResult finalResult = findMinMax(data, 0, n - 1);

    std::cout << "--- Divide and Conquer Result ---" << std::endl;
    std::cout << "Original Array: ";
    for (int x : data) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
    std::cout << "Minimum element is: " << finalResult.min << std::endl; // Output: 1
    std::cout << "Maximum element is: " << finalResult.max << std::endl; // Output: 99

    return 0;
}