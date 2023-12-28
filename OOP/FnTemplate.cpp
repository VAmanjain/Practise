#include<iostream>
using namespace std;

template <class T>
void biggest (T num1, T num2) {
    if (num1 > num2)
    {
        cout<<"The greater among two given inputs is : "<<num1<<endl;
    }else{
        cout<<"The greater among two given inputs is : "<<num2<<endl;
    }
}
int main(){
    int n1=2, n2=3;
    double d1=2.2, d2=3.4;
    char c1='A', c2='B';
    biggest(n1,n2);
    biggest(d1,d2);
    biggest(c1,c2);  //will check according to ASCII value
    return 0;
}