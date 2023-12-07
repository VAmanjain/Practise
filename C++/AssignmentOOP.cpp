#include <iostream>

using namespace std;

class Complex {
private:
    double real;
    double imaginary;

public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imaginary(i) {}

    Complex& operator=(const Complex& other) {
        if (this != &other) {
            real = other.real;
            imaginary = other.imaginary;
        }
        return *this;
    }

    void display() {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

int main() {
    double real1, real2, image1, image2;
    cout<<"Enter a real and imaginary :";
    cin>>real1>>image1>>real2>>image2;

    Complex c1(real1, image1);
    Complex c2(real2, image2);

    cout << "Initial complex numbers:" << endl;
    cout << "Complex 1: ";
    c1.display();
    cout << "Complex 2: ";
    c2.display();

    c1 = c2; // Using the overloaded assignment operator

    cout << "\nAfter assignment:" << endl;
    cout << "Complex 1: ";
    c1.display();
    cout << "Complex 2: ";
    c2.display();

    return 0;
}
