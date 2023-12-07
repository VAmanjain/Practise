#include <iostream>

using namespace std;

class MyClass {
private:
    int value;

public:
    // Parameterized constructor to initialize default value
    MyClass(int val) : value(val) {}

    // Function to display the value
    void displayValue() {
        cout << "Value is: " << value << endl;
    }

    // Overloading the == operator
    bool operator==(const MyClass &other) {
        return this->value == other.value;
    }
};

int main() {
    MyClass obj1(5); // Creating object 1 with value 5
    MyClass obj2(10); // Creating object 2 with value 10

    cout << "Object 1: ";
    obj1.displayValue();

    cout << "Object 2: ";
    obj2.displayValue();

    // Checking equality using the overloaded ==
    if (obj1 == obj2) {
        cout << "Objects are equal." << endl;
    } else {
        cout << "Objects are not equal." << endl;
    }

    return 0;
}
