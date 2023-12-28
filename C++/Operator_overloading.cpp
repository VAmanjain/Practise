#include<iostream>
using namespace std;

class Add {
    int n;
    public:

    void getData () {
        cout<<"Enter data:"<<endl;
        cin>>n;
    }
    void operator + (Add ob){
        Add temp;
        temp.n= n + ob.n;
        cout<<"The addition result is " <<temp.n<<endl;
    }
    void operator - (Add obj){
        Add temp;
        temp.n = n - obj.n;
        cout<<"The subtraction result is :"<<temp.n;
    }

};

int main () {
    Add obj1, obj2;
    obj1.getData();
    obj2.getData();
    obj1+obj2;
    obj1-obj2;

}