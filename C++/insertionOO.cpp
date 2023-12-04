#include <iostream>
#include <string>

using namespace std;

class MyData {
private:
    int value;
    string name;

public:
    MyData(int val, const string& nm) : value(val), name(nm) {}

    friend ostream& operator<<(ostream& os, const MyData& data) {
        os << "Value: " << data.value << ", Name: " << data.name;
        return os;
    }
};

int main() {
    MyData data1(10, "Data 1");
    MyData data2(20, "Data 2");

    // Outputting data using overloaded operator
    cout << "Data 1: " << data1 << endl;
    cout << "Data 2: " << data2 << endl;

    return 0;
}
