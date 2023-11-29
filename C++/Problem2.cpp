// Write a cpp program mke class Data to find largest and smallest of threee input of same datatypes with function by using class template .




#include <iostream>
using namespace std;

// Class template
template <class T>
class Data {
private:
    // Array of three elements of type T
    T arr[3];
public:
    // Constructor that takes three arguments of type T
    Data(T a, T b, T c) {
        arr[0] = a;
        arr[1] = b;
        arr[2] = c;
    }

    // Function that returns the largest element in the array
    T largest() {
        T max = arr[0];
        for (int i = 1; i < 3; i++) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }
        return max;
    }

    // Function that returns the smallest element in the array
    T smallest() {
        T min = arr[0];
        for (int i = 1; i < 3; i++) {
            if (arr[i] < min) {
                min = arr[i];
            }
        }
        return min;
    }
};

int main() {
    // Create objects of class Data with different data types
    Data<int> dataInt(10, 20, 30);
    Data<float> dataFloat(10.5, 20.5, 30.5);
    Data<char> dataChar('a', 'b', 'c');

    // Print the largest and smallest elements for each object
    cout << "Largest int: " << dataInt.largest() << endl;
    cout << "Smallest int: " << dataInt.smallest() << endl;
    cout << "Largest float: " << dataFloat.largest() << endl;
    cout << "Smallest float: " << dataFloat.smallest() << endl;
    cout << "Largest char: " << dataChar.largest() << endl;
    cout << "Smallest char: " << dataChar.smallest() << endl;

    return 0;
}
