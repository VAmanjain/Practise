#include <iostream>
#include <string>

using namespace std;

class MyClass {
private:
    int value;
    string name;

public:
    MyClass(int val, const string& nm) : value(val), name(nm) {}


    MyClass& operator=(const MyClass& other) {
        if (this != &other) { 
            value = other.value;
            name = other.name;
        }
        return *this;
    }

    
    void display() {
        cout << "Value: " << value << ", Name: " << name << endl;
    }
};

int main() {
    MyClass obj1(10, "Object 1");
    MyClass obj2(20, "Object 2");

    cout << "Initial values:" << endl;
    obj1.display();
    obj2.display();

    obj1 = obj2; // Using the overloaded assignment operator

    cout << "\nAfter assignment:" << endl;
    obj1.display();
    obj2.display();

    return 0;
}
