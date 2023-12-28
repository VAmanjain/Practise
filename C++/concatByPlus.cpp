#include<iostream>
#include<string.h>
using namespace std;

class First {
    char str[30];
    public:
    void read () {
        cout<<"Enter string:"<<endl;
        cin>>str;
    }
    void print () {
        cout<<"The string is: "<<str<<endl;
    }
    First operator + (First X){
        First temp;
        strcpy(temp.str, str);
        strcat(temp.str, X.str);
        return temp;
    }
};

int main () {
    First obj1, obj2, obj3;
    obj1.read();
    obj2.read();
    obj3=obj1+obj2;
    obj3.print();
}