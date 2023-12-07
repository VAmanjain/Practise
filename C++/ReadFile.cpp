#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string userInput;

    // Open a file for writing
    ofstream outFile("example.txt");

    // Check if the file is opened successfully
    if (!outFile.is_open()) {
        cout << "Error opening the file!" << endl;
        return 1;
    }

    // Continuously take input from user and write to the file
    while (true) {
        cout << "Enter data to write to the file (type 'exit' to stop): ";
        getline(cin, userInput);

        // Check for the exit condition
        if (userInput == "exit") {
            break;
        }

        // Write user input to the file
        outFile << userInput << endl;
    }

    // Close the file after writing
    outFile.close();

    // Open the same file for reading
    ifstream inFile("example.txt");

    // Check if the file is opened successfully
    if (!inFile.is_open()) {
        cout << "Error opening the file for reading!" << endl;
        return 1;
    }

    string line;

    // Read and display the data from the file
    cout << "Contents of the file:" << endl;
    while (getline(inFile, line)) {
        cout << line << endl;
    }

    // Close the file after reading
    inFile.close();

    return 0;
}
