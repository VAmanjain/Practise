#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{

    string line;
    ofstream out;
    out.open("file1.txt");
    cout << "Enter Data: " << endl;
    getline(cin, line);
    out << line;
    out.close();

    ifstream in;
    in.open("file1.txt");
    ofstream out1;
    out1.open("file2.txt");
    out1 << line;
    out.close();
    ifstream in2;
    in2.open("file2.txt");
    in2 >> line;
    cout << line;
    in2.close();

    return 0;
}
