// Static Member function Implementation

#include <iostream>
using namespace std;

class Student {
    int id;
    char name[20];
    static int count;
public:
    void getdata() {
        cout << "Enter student id and name:"<< endl;
        cin>>id>>name;
        count++;
    }
    static void getcount(){
        cout<<"Number of students are "<<count<<endl;
    }
    void putdata(){
        cout<<"Id: "<<id<<", Name: "<<name<<endl;
    }
};
int Student::count;
int main() {
    Student S;
    Student S2;
    Student S3;
    S.getdata();
    S2.getdata();
    S3.getdata();
    S.putdata();
    S2.putdata();
    S3.putdata();
    Student::getcount();
    return 0;
}