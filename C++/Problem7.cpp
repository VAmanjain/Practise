//  WAP to Overload increament and decrement Operator value by 2

#include <iostream>

class Number {
private:
    int value;

public:
    Number(int val) : value(val) {}

    // Overloading the prefix increment operator (++)
    Number& operator++() {
        value += 2;
        return *this;
    }

    // Overloading the prefix decrement operator (--)
    Number& operator--() {
        value -= 2;
        return *this;
    }

    void display() {
        std::cout << "Value: " << value << std::endl;
    }
};

int main() {
    Number num(5);

    std::cout << "Initial value:" << std::endl;
    num.display();

    // Incrementing by 2 using overloaded ++
    ++num;
    std::cout << "After incrementing by 2 using ++:" << std::endl;
    num.display();

    // Decrementing by 2 using overloaded --
    --num;
    std::cout << "After decrementing by 2 using --:" << std::endl;
    num.display();

    return 0;
}

