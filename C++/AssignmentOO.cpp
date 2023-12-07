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
        }
        return *this;
    }

    
    void display() {
        cout << "Value: " << value << ", Name: " << name << endl;
    }
};

int main() {
    int v1,v2;
    cout<<"Enter a Value of object 1: ";
    cin>>v1;
    cout<<"Enter a Value of object 2: ";
    cin>>v2;

    MyClass obj1(v1, "Object 1");
    MyClass obj2(v2, "Object 2");

    cout << "Initial values:" << endl;
    obj1.display();
    obj2.display();

    obj1 = obj2; // Using the overloaded assignment operator

    cout << "\nAfter assignment:" << endl;
    obj1.display();
    obj2.display();

    return 0;
}
