#include <iostream>

using namespace std;

class Number {
private:
    int value;

public:
    Number(int val) : value(val) {}

    int getValue() const {
        return value;
    }

    
    Number operator-(const Number& other) const {
        int result = this->value - other.value;
        return Number(result);
    }
};

int main() {
    Number num1(15);
    Number num2(7);

    Number difference = num1 - num2; 

    cout << "Difference: " << difference.getValue() << endl;

    return 0;
}
