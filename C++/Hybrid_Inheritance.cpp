// Develop a class named Student with methods get_number and put_number, develop one more class named as Test and put and display test marks in it and implement feature of Student. Develop one more named as Sports, write get_score and put_score methods in it. Develop class Results which extends the feature of test and sports.

#include <iostream>
using namespace std;

class Student {
    int num;
public:
   void get_number(){
    cout<<"Enter Student number"<<endl;
    cin>>num;
    }
    void put_number(){
        cout<<"Student number is "<<num<<endl;
    }
};

class Test:public Student {
    int tst, tst2;
public:
   void get_test(){
    cout<<"Enter Student test score in English and Science"<<endl;
    cin>>tst>>tst2;
    }
    void put_test(){
        cout<<"Student number in english is "<<tst<<" and in Science is "<<tst2<<endl;
    }
};

class Sports:public Student {
    int spt;
public:
   void get_score(){
    cout<<"Enter Student score in sports"<<endl;
    cin>>spt;
    }
    void put_score(){
        cout<<"Student score in sports is "<<spt<<endl;
    }
};

class Result:public Test, public Sports{
    public:
    void display(){
        cout<<"The result is: "<<endl;
    }
};

int main() {
    Result object;
    object.Test::get_number();
    object.get_test();
    object.get_score();
    object.display();
    object.Sports::put_number();
    object.put_test();
    object.put_score();
    return 0;
}