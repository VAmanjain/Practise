#include<iostream>
#include<fstream>
using namespace std;

int main(){
    char data[100];
    ofstream outfile;
    outfile.open("note1.txt");
    cout<<"Taking Data form Keyboard:"<<endl;
    cin>>data;
    outfile<<data;
    cout<<"Enter age: "<<endl;
    cin>>data;
    outfile<<data;
    outfile.close();

    //Read data from file

    ifstream infile;
    infile.open("note1.txt");
    infile>>data;
    cout<<data<<endl;
    infile.close();
}