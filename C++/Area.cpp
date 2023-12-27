#include<iostream>
using namespace std;

class Polygon {
public:
    int width;
    int height;

    void get() {
        cout << "Enter width: ";
        cin >> width;
        cout << "Enter height: ";
        cin >> height;
    }
};

class Rectangle : public Polygon {
public:
    int area;

    void calculateArea() {
        area = width * height;
        cout << "Area of Rectangle: " << area << endl;
    }
};

class Triangle : public Polygon {
public:
    float area;

    void calculateArea() {
        area = 0.5 * width * height;
        cout << "Area of Triangle: " << area << endl;
    }
};

int main() {
    Rectangle rect;
    cout << "Enter dimensions for Rectangle:" << endl;
    rect.get();
    rect.calculateArea();

    Triangle tri;
    cout << "Enter dimensions for Triangle:" << endl;
    tri.get();
    tri.calculateArea();

    return 0;
}