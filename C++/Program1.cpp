#include<iostream>
class MyClass
{
public:
    static int count;

    MyClass()
    {
        count++;
    }

    ~MyClass()
    {
        count--;
    }

    static int getCount()
    {
        return count;
    }
};

int MyClass::count = 0;

int main()
{
    MyClass myObject;
    std::cout << MyClass::getCount() << std::endl;
    return 0;
}