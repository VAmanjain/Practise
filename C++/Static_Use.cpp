// Use Case of Static Data Member 

#include<iostream>
using namespace std;

class ABC{
    public:
    static int counter;
    ABC(){
        counter++;
    }
};
int ABC::counter=0;

int main(){
    ABC obj1;
    ABC obj2;
    ABC obj3;
    cout<<"The number of objects are: "<<ABC::counter<<endl;
    return 0;
}