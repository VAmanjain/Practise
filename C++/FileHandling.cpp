#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // Array to store 20 integer numbers
    int numbers[20];

    // Taking input of 20 numbers
    cout << "Enter 20 integer numbers: ";
    for (int i = 0; i < 20; ++i) {
        cin >> numbers[i];
    }

    // Writing even and odd numbers to respective files
    ofstream evenFile("Even.txt");
    ofstream oddFile("Odd.txt");

    if (!evenFile.is_open() || !oddFile.is_open()) {
        cout << "Error opening files for writing!" << endl;
        return 1;
    }

    for (int i = 0; i < 20; ++i) {
        if (numbers[i] % 2 == 0) {
            evenFile << numbers[i] << endl;
        } else {
            oddFile << numbers[i] << endl;
        }
    }

    evenFile.close();
    oddFile.close();

    // Reading numbers from files and displaying them
    ifstream evenRead("Even.txt");
    ifstream oddRead("Odd.txt");

    if (!evenRead.is_open() || !oddRead.is_open()) {
        cout << "Error opening files for reading!" << endl;
        return 1;
    }

    int evenNum, oddNum;

    cout << "\nEven numbers from Even.txt: " << endl;
    while (evenRead >> evenNum) {
        cout << evenNum << " ";
    }
    cout << endl;
    evenRead.close();

    cout << "\nOdd numbers from Odd.txt: " << endl;
    while (oddRead >> oddNum) {
        cout << oddNum << " ";
    }
    cout << endl;
    oddRead.close();

    return 0;
}
