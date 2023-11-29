#include <iostream>
#include <string>

using namespace std;

// Structure to represent a book
struct Book {
    int bookId;
    string name;
    string author;
};

int main() {
    // Create an array to store information for 10 books
    Book library[10];

    // Input book information
    for (int i = 0; i < 10; i++) {
        cout << "Enter information for book " << i + 1 << ":" << endl;
        cout << "Book ID: ";
        cin >> library[i].bookId;
        cin.ignore(); // Clear the newline character from the input buffer
        cout << "Book Name: ";
        getline(cin, library[i].name);
        cout << "Author: ";
        getline(cin, library[i].author);
    }

    // Search for a book by book ID
    int searchId;
    cout << "Enter the Book ID to search for: ";
    cin >> searchId;

    // Search for the book and display its information
    bool found = false;
    for (int i = 0; i < 10; i++) {
        if (library[i].bookId == searchId) {
            cout << "Book ID: " << library[i].bookId << endl;
            cout << "Book Name: " << library[i].name << endl;
            cout << "Author: " << library[i].author << endl;
            found = true;
            break; // Book found, no need to continue searching
        }
    }

    if (!found) {
        cout << "Book not found in the library." << endl;
    }

    return 0;
}
