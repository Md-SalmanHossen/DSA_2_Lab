#include <iostream>
#include <algorithm>  // for sort()
using namespace std;

int main() {
    // Declare and initialize an array
    int arr[] = {5, 2, 9, 1, 7};

    // Find the size of the array
    int n = sizeof(arr) / sizeof(arr[0]);

    // Sort the array in ascending order
    sort(arr, arr + n);

    // Print sorted array
    cout << "Array in ascending order: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Sort in descending order (using greater<int>())
    sort(arr, arr + n, greater<int>());

    cout << "Array in descending order: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

