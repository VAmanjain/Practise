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
    int x;
    cout<<"Enter a value :";
    cin>>x;

    Number num(x);
    cout << "Original Value: " << num.getValue() << endl;
    --num;
    cout << "After Decrement: " << num.getValue() << endl;

    return 0;
}
