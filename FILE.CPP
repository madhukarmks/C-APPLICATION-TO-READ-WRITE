#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void writeToFile(const string &filename) {
    ofstream outFile(filename);
    if (!outFile) {
        cerr << "Error opening file for writing!" << endl;
        return;
    }
    string data;
    cout << "Enter text to write to the file: ";
    cin.ignore();
    getline(cin, data);
    outFile << data << endl;
    outFile.close();
    cout << "Data written successfully!" << endl;
}

void appendToFile(const string &filename) {
    ofstream outFile(filename, ios::app);
    if (!outFile) {
        cerr << "Error opening file for appending!" << endl;
        return;
    }
    string data;
    cout << "Enter text to append to the file: ";
    cin.ignore();
    getline(cin, data);
    outFile << data << endl;
    outFile.close();
    cout << "Data appended successfully!" << endl;
}

void readFromFile(const string &filename) {
    ifstream inFile(filename);
    if (!inFile) {
        cerr << "Error opening file for reading!" << endl;
        return;
    }
    string data;
    cout << "File content:" << endl;
    while (getline(inFile, data)) {
        cout << data << endl;
    }
    inFile.close();
}

int main() {
    string filename = "file.txt";
    int choice;
    do {
        cout << "\nFile Handling Menu:" << endl;
        cout << "1. Write to File" << endl;
        cout << "2. Append to File" << endl;
        cout << "3. Read from File" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                writeToFile(filename);
                break;
            case 2:
                appendToFile(filename);
                break;
            case 3:
                readFromFile(filename);
                break;
            case 4:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice! Try again." << endl;
        }
    } while (choice != 4);
    return 0;
}
