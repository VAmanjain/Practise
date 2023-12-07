#include <iostream>
using namespace std;

// Template function to swap two values of any data type
template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1 = 5, num2 = 10;
    char char1 = 'A', char2 = 'B';
    float float1 = 3.14f, float2 = 6.28f;

    // Swapping integers
    cout << "Before swapping integers:" << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;
    swapValues(num1, num2);
    cout << "After swapping integers:" << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl << endl;

    // Swapping characters
    cout << "Before swapping characters:" << endl;
    cout << "char1 = " << char1 << ", char2 = " << char2 << endl;
    swapValues(char1, char2);
    cout << "After swapping characters:" << endl;
    cout << "char1 = " << char1 << ", char2 = " << char2 << endl << endl;

    // Swapping floats
    cout << "Before swapping floats:" << endl;
    cout << "float1 = " << float1 << ", float2 = " << float2 << endl;
    swapValues(float1, float2);
    cout << "After swapping floats:" << endl;
    cout << "float1 = " << float1 << ", float2 = " << float2 << endl << endl;

    return 0;
}
