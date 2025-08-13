#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char choice;
    cout << "Enter your grade letter: ";
    cin >> choice;

    choice = toupper(choice);  // Convert to uppercase if needed

    switch (choice) {
        case 'A':
            cout << "Excellent" << endl;
            break;
        case 'B':
            cout << "Good" << endl;
            break;
        case 'C':
            cout << "Satisfactory" << endl;
            break;
        case 'D':
            cout << "Pass" << endl;
            break;
        case 'F':
            cout << "Fail" << endl;
            break;
        default:
            cout << "Invalid grade letter. Enter A, B, C, D, or F." << endl;
    }

    return 0;
}

