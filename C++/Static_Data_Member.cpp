// Implement Static Data members

#include <iostream>
using namespace std;

class A {
    static int a;
    public:
        static int plus_one() {
            return ++a;
        }
};

int A::a = 19;

int main() {
    // A a;
    // cout << a.plus_one();
    // No need of creating an instance (object) to access static data members
    cout << A::plus_one();//calling using scope resolution operator only

    return 0;
}