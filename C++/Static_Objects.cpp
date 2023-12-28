// Static Objects implementation

// In static object , each data member is initialized to object default (initialized to 0) which does not happen in normal object.

#include<iostream>
using namespace std;

class Sample{
    int num1, num2;
    public:
    void add(){
        num1=num1+5;
        num2=num2+5;
    }
    void display(){
        cout<<"num1= "<<num1<<" , num2= "<<num2<<endl;
    }
    
};

int main(){
    static Sample S;
    cout<<"value before calling add function"<<endl;
    S.display();
    S.add();
    cout<<"value after calling add()"<<endl;
    S.display();
    return 0;
}