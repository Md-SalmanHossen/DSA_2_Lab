/*
4. You are given the arrival and the departure times of eight trains for a railway platform, and each one is in the format: [arrival time, departure time). Only one train can use the platform at a time. There must be at least 1 unit time gap between 2 consecutive trains. Suppose that you have got the following train-use requests for the next day. 
{ [8, 12), [6, 9), [11, 14), [2, 7), [1, 7), [12, 20), [7, 12) , [13, 19) } 
Find the maximum number of trains that can use the platform without any collision by using earliest departure time. 	

*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<pair<int,int>> trains = { {8,12}, {6,9}, {11,14}, {2,7}, {1,7}, {12,20}, {7,12}, {13,19} };

    // sort by earliest departure
    sort(trains.begin(), trains.end(), [](pair<int,int> a, pair<int,int> b){
        return a.second < b.second;
    });

    int count = 0;
    int last_departure = -1;

    cout << "Selected trains (arrival, departure): ";
    for(auto train: trains) {
        if(train.first >= last_departure + 1) {  // 1 unit time gap
            cout << "(" << train.first << "," << train.second << ") ";
            last_departure = train.second;
            count++;
        }
    }

    cout << "\nMaximum number of trains = " << count << endl;

    return 0;
}
