#include <iostream>
#include <utility>   // for pair
#include <vector>
using namespace std;

// Custom comparator: sorts by second (string)
bool compareByName(pair<int, string> a, pair<int, string> b) {
    return a.second < b.second;  // ascending order of names
}

int main() {
    // Create a pair
    pair<int, string> p1(1, "Hello");

    // Access elements
    cout << p1.first << " " << p1.second << endl;

    // Modify elements
    p1.first = 2;
    p1.second = "World";

    cout << p1.first << " " << p1.second << endl;

    // Another way to initialize
    pair<int, string> p2 = make_pair(3, "C++");

    cout << p2.first << " " << p2.second << endl;

     // Vector of pairs
    vector<pair<int, string>> students = {
        {3, "Charlie"},
        {1, "Alice"},
        {2, "Bob"}
    };

    // Sort by first element (default behavior)
    sort(students.begin(), students.end());

    cout << "Sorted by ID (first):" << endl;
    for (auto x : students)
        cout << x.first << " " << x.second << endl;



     // Sort by second element
    sort(students.begin(), students.end(), compareByName);

    cout << "Sorted by Name (second):" << endl;
    for (auto x : students)
        cout << x.first << " " << x.second << endl;


    return 0;
}

