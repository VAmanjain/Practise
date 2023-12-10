#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string line;
    //Writting data

    ofstream outfile;
    outfile.open("note2.txt");
    cout<<"Enter Data and give -1 stop :"<<endl;
    while(outfile){
        getline(cin, line);
        if(line=="-1"){
            break;
        }
        outfile<<line;
    }
    outfile.close();

    // Read data form file

    ifstream infile;
    infile.open("note2.txt");
    while (infile)
    {
        getline(infile,line);
        cout<<line;
    }
    infile.close();
    }
