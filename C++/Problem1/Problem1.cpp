//-----------Problem Statement----------
// Develop a class is name employe in this method is emp_name, emp_workingdays, emp_salary. Develop one more class this class extands employe name is manager in this class overriding on super class (Single Level Inheritance).
//Take input from User

#include<iostream>
#include<string>
using namespace std;

class Employe{
    public:
    int eworking;
    string ename;
    float esalary;
    void emp_name(){
        cout<<"Name: ";
    }
    void emp_workingDay(){
        cout<<"Working Days";
    }
    void emp_salary(){
        cout<<"Salary";
    }
};
class Manager: public Employe{
    public:
      void emp_name(){
        cout<<"Name: ";
        cin>>ename;
    }
    void emp_workingDay(){
        cout<<"Working Days";
        cin>>eworking;
    }
    void emp_salary(){
        cout<<"Salary";
        cin>>esalary;
    }
    void display(){
        cout<<"student Details:--"<<endl<<ename<<endl<<eworking<<endl<<esalary<<endl;
    }
};

int main (){
    Manager ob;
    ob.emp_name();
    ob.emp_workingDay();
    ob.emp_salary();
    ob.display();

    return 0;
}