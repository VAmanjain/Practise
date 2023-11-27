// write a cpp program for class a Calculator  to find addition ,subtraction, multiplication and division using class template

#include <iostream>
using namespace std;

// Class template
template <class T>
class Calculator {
private:
    // Two operands of type T
    T num1, num2;
public:
    // Constructor that takes two arguments of type T
    Calculator(T a, T b) {
        num1 = a;
        num2 = b;
    }

    // Function that returns the sum of the operands
    T add() {
        return num1 + num2;
    }

    // Function that returns the difference of the operands
    T subtract() {
        return num1 - num2;
    }

    // Function that returns the product of the operands
    T multiply() {
        return num1 * num2;
    }

    // Function that returns the quotient of the operands
    T divide() {
        return num1 / num2;
    }
};

int main() {
    // Create objects of class Calculator with different data types
    Calculator<int> calcInt(10, 5);
    Calculator<float> calcFloat(10.5, 5.5);

    // Print the results of the operations for each object
    cout << "Integer Calculator:" << endl;
    cout << "Addition: " << calcInt.add() << endl;
    cout << "Subtraction: " << calcInt.subtract() << endl;
    cout << "Multiplication: " << calcInt.multiply() << endl;
    cout << "Division: " << calcInt.divide() << endl;

    cout << "Float Calculator:" << endl;
    cout << "Addition: " << calcFloat.add() << endl;
    cout << "Subtraction: " << calcFloat.subtract() << endl;
    cout << "Multiplication: " << calcFloat.multiply() << endl;
    cout << "Division: " << calcFloat.divide() << endl;


    return 0;
}
