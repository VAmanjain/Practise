// Write  a cpp program to illustrate  the member function template define outside the class  . It will have to private  data member  and parameterize constructor and for template function to perform addtion, subtraction, multiplication, divide.

#include <iostream>
using namespace std;

// Class template
template <class T>
class Calculator {
private:
    // Two private data members of type T
    T num1, num2;
public:
    // Parameterized constructor that takes two arguments of type T
    Calculator(T a, T b) {
        num1 = a;
        num2 = b;
    }

    // Template function to perform addition
    T add();

    // Template function to perform subtraction
    T subtract();

    // Template function to perform multiplication
    T multiply();

    // Template function to perform division
    T divide();
};

// Definition of the template function to perform addition outside the class
template <class T>
T Calculator<T>::add() {
    return num1 + num2;
}

// Definition of the template function to perform subtraction outside the class
template <class T>
T Calculator<T>::subtract() {
    return num1 - num2;
}

// Definition of the template function to perform multiplication outside the class
template <class T>
T Calculator<T>::multiply() {
    return num1 * num2;
}

// Definition of the template function to perform division outside the class
template <class T>
T Calculator<T>::divide() {
    return num1 / num2;
}

int main() {
    // Create an object of class Calculator with the data type int
    Calculator<int> calcInt(10, 5);

    // Print the results of the operations
    cout << "Integer Calculator:" << endl;
    cout << "Addition: " << calcInt.add() << endl;
    cout << "Subtraction: " << calcInt.subtract() << endl;
    cout << "Multiplication: " << calcInt.multiply() << endl;
    cout << "Division: " << calcInt.divide() << endl;

    return 0;
}
