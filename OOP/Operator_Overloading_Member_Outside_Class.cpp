// Unary[-] operator as a member function outside the class

#include <iostream>
using namespace std;

class Test
{
    int value;

public:
    void readValue()
    {
        cout << "Enter a value: ";
        cin >> value;
    }
    void display()
    {
        cout << "Value= " << value << endl;
    }
    void operator-();
};

void Test ::operator-()
{
    value = -value;
}

int main()
{
    Test t;
    t.readValue();
    cout << "Value before change:" << endl;
    t.display();
    t.operator-(); // or we can call it as -t;
    cout << "Value after change:" << endl;
    t.display();

    return 0;
}