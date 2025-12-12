/*
3. Following items are available in a grocery shop: 
➢ 12 kilogram rice grain which costs 840 taka 
➢ 10 kilogram salt which costs 870 taka 
➢ 8 kilogram saffron powder which costs 2000 taka and 
➢ 5 kilogram sugar which costs 500 taka 
 A group of thieves (Thief 1, Thief 2, … Thief M) have come to steal from that shop, each with a knapsack of capacity 9 kg. The thieves are entering in serial, Thief 2 enters after Thief 1 is done with stealing, Thief 3 enters after Thief 2 is done with stealing and so on. Since each thief wants to maximize his/her profit, how many thieves will be needed in the group to empty the grocery shop and what are the items that each of those thieves carry? Also print each thief’s profit.

*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 4; // number of items
    int capacity = 9; // knapsack capacity

    string items[] = {"Rice", "Salt", "Saffron", "Sugar"};
    int weight[] = {12, 10, 8, 5};
    int price[] = {840, 870, 2000, 500};
    double value_per_kg[4];

    // calculate value per kg
    for(int i = 0; i < n; i++) {
        value_per_kg[i] = (double)price[i]/weight[i];
    }

    int thief_no = 1;

    while(true) {
        int remaining = capacity;
        bool has_items = false;
        double profit = 0;

        cout << "Thief " << thief_no << " takes: ";

        // greedy: pick highest value_per_kg first
        while(remaining > 0) {
            int idx = -1;
            double max_value = 0;

            // find available item with max value per kg
            for(int i = 0; i < n; i++) {
                if(weight[i] > 0 && value_per_kg[i] > max_value) {
                    max_value = value_per_kg[i];
                    idx = i;
                }
            }

            if(idx == -1) break; // no more items

            int take = min(weight[idx], remaining);
            weight[idx] -= take;
            remaining -= take;
            profit += take * value_per_kg[idx];
            cout << take << " kg " << items[idx] << ", ";
            has_items = true;
        }

        if(!has_items) break; // shop empty

        cout << "Profit = " << profit << endl;
        thief_no++;
    }

    cout << "Total thieves needed = " << thief_no - 1 << endl;

    return 0;
}
