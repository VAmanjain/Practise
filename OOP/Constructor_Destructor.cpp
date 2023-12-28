//Create a constructor and its destructor

#include <iostream>
using namespace std;

class first {
public:
    first() {
        cout << "Constructor called" << endl;
    }
    ~first(){
        cout<<"Destructor called"<<endl;
    }
};

int main() {
    first obj;
    return 0;
}