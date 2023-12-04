#include <iostream>

using namespace std;

class MyClass {
private:
    int value;

public:
    MyClass() : value(0) {}

    friend istream& operator>>(istream& input, MyClass& obj) {
        input >> obj.value;
        return input;
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    MyClass obj;

    cout << "Enter a value for the object: ";
    cin >> obj; // Using the overloaded extraction operator

    cout << "\nThe entered value is: ";
    obj.display();

    return 0;
}
