#include <iostream>
using namespace std;

template <class T>

void swapp(T num1, T num2){
    T temp;
    temp = num1;
    num1= num2;
    num2 = temp;
cout<<"after swap: "<<endl;
cout<<"num1= "<<num1<<endl<<"num2= "<<num2<<endl;
}

int main() {
   int num1= 10, num2= 20;
   char ch1='A', ch2='B';
   swapp(num1, num2);
   swapp(ch1, ch2);
    return 0;
}