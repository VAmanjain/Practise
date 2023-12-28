//Simple_Practise_1
//Create a program to perform addition, subtraction and multiplication of two numbers which are taken from user using class and create separate function for each operation.

#include <iostream>
using namespace std;

class first {
public:
    int one(){
        int a;
        cout<<"Enter first number:"<<endl;
        cin>>a;
        return a;
    }
    int two(){
        int b;
        cout<<"Enter second number:"<<endl;
        cin>>b;
        return b;
    }
    void add(int one, int two) {
        cout<<"The sum of two numbers is : "<<one+two<<endl;
    }
    void sub(int one, int two) {
        cout<<"The difference of two numbers is : "<<one-two<<endl;
    }
    void pro(int one, int two) {
        cout<<"The product of two numbers is : "<<one*two<<endl;
    }
};

int main() {
    cout<<"Enter 2 numbers: "<<endl;
    first obj1;
    int num1 = obj1.one();
    int num2 = obj1.two();
    obj1.add(num1,num2);
    obj1.sub(num1,num2);
    obj1.pro(num1,num2);

    return 0;
}