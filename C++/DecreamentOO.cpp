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

    Number operator--() {
        value--; 
        return *this; 
            }
};

int main() {
    Number num(10);
    cout << "Original Value: " << num.getValue() << endl;
    --num;
    cout << "After Decrement: " << num.getValue() << endl;

    return 0;
}
