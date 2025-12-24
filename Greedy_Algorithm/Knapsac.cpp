#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Item {
    int value;
    int weight;
    Item(int v, int w) : value(v), weight(w) {}
};

bool compare(Item a, Item b) {
    double ratioA = (double)a.value / a.weight;
    double ratioB = (double)b.value / b.weight;
    return ratioA > ratioB; 
}

double fractionalKnapsack(int capacity, vector<Item>& items) {
    sort(items.begin(), items.end(), compare);

    double totalValue = 0.0;

    for (const auto& item : items) {
        if (capacity >= item.weight) {
            capacity -= item.weight;
            totalValue += item.value;
        } else {
            double fraction = (double)capacity / item.weight;
            totalValue += item.value * fraction;
            break; 
        }
    }

    return totalValue;
}

int main() {
    int capacity = 50;
    vector<Item> items = { {60, 10}, {100, 20}, {120, 30} };

    double maxVal = fractionalKnapsack(capacity, items);

    cout << "Maximum value in Knapsack = $" << maxVal << endl;

    return 0;
}