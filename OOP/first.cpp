#include<iostream>
 using namespace std;

 class first
 {
 public:
   void display(){
      cout<<"Using First Class"<<endl;
   }
 };

 

 int main () {
   int i;
    cout<<"First Program"<<endl;
   first obj1;
    obj1.display();

    return 0;
 }
