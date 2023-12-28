#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter:"<<endl;
   try{
    cin>>n;
    if(cin.fail()||cin.peek()!='\n'){
        throw 1;
    }else{
        cout<<"okay"<<endl;
    }
   }
   catch(int x){
    if(x==1)
    cout<<"only integer please"<<endl;
   }
    return 0;
}
