// Unary[-] operator as a Friend Function

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
    friend void operator-(Test &t);
};

void operator-(Test &t)
{
    t.value = -t.value;
}

int main()
{
    Test t;
    t.readValue();
    cout << "Value before change:" << endl;
    t.display();
    -t; // or we can call it as t.operator-();
    cout << "Value after change:" << endl;
    t.display();

    return 0;
}