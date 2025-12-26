#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int solveKnapsack(int W, const vector<int>& weights, const vector<int>& values, int n) {
    vector<int> dp(W + 1, 0);

    for (int i = 0; i < n; i++) {
        for (int j = W; j >= weights[i]; j--) {
            dp[j] = max(dp[j], values[i] + dp[j - weights[i]]);
        }
    }

    return dp[W]; 
}

int main() {
   
    int n = 4;           
    int W = 5;           
    vector<int> values = {3, 4, 5, 6}; 
    vector<int> weights = {2, 3, 4, 5}; 

    int result = solveKnapsack(W, weights, values, n);

    cout << "Maximum Value achievable: " << result << endl;

    return 0;
}
