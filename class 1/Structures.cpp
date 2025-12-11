#include <iostream>
#include <string>
using namespace std;

struct Person {
    string name;
    int day;
    int month;
    int year;

    void setName(string _name) {
        name = _name;
    }

    void setDob(int _day, int _month, int _year) {
        day = _day;
        month = _month;
        year = _year;
    }

    void printName() {
        cout << "My name is " << name << endl;
    }

    void printDOB() {
        cout << "My DOB is " << day << "/" << month << "/" << year << endl;
    }
};

int main() {
    Person person1;
    person1.setName("Wally West");
    person1.setDob(1, 2, 2000);
    person1.printName();
    person1.printDOB();
    return 0;
}

