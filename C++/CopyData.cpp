#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // Open first file for writing
    ofstream firstFile("first.txt");

    // Check if the first file is opened successfully
    if (!firstFile.is_open()) {
        cout << "Error opening the first file!" << endl;
        return 1;
    }

    // Write data to the first file
    firstFile << "This is some data written to the first file." << endl;
    firstFile << "This is another line of data in the first file." << endl;

    // Close the first file after writing
    firstFile.close();

    // Open first file for reading
    ifstream readFirstFile("first.txt");

    // Open second file for writing (copying data)
    ofstream secondFile("second.txt");

    // Check if both files are opened successfully
    if (!readFirstFile.is_open() || !secondFile.is_open()) {
        cout << "Error opening files for reading/writing!" << endl;
        return 1;
    }

    string line;

    // Copy data from first file to second file
    while (getline(readFirstFile, line)) {
        secondFile << line << endl;
    }

    // Close both files after copying
    readFirstFile.close();
    secondFile.close();

    // Open second file for reading
    ifstream readSecondFile("second.txt");

    // Check if the second file is opened successfully
    if (!readSecondFile.is_open()) {
        cout << "Error opening the second file for reading!" << endl;
        return 1;
    }

    // Read and display the data from the second file
    cout << "Contents of the second file:" << endl;
    while (getline(readSecondFile, line)) {
        cout << line << endl;
    }

    // Close the second file after reading
    readSecondFile.close();

    return 0;
}
