#include <iostream>
using namespace std;

class MyClass {
private:
    int data;

public:
    MyClass() : data(0) {}

    // Overloading insertion operator (<<)
    ostream& operator<<(ostream& outStream) const {
        outStream << "Data: " << data;
        return outStream;
    }

    // Overloading extraction operator (>>)
    istream& operator>>(istream& inStream) {
        cout << "Enter data: ";
        inStream >> data;
        return inStream;
    }
};

int main() {
    MyClass obj;

    // Input data using overloaded extraction operator
    obj.operator>>(cin);

    // Output data using overloaded insertion operator
    obj.operator<<(cout) << endl;

    return 0;
}
