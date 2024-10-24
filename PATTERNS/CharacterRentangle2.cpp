#include <iostream> 
using namespace std; 

int main() {
    int n; 
    cout << "Enter the Number: "; 
    cin >> n; 

    int i, j; 

    for (i = 0; i < n; i++) { // Outer loop for rows
        char ch = 'A'; // Start character for each row
        for (j = 0; j < n; j++) { // Inner loop for columns
            cout << ch; // Print the current character
            ch += 1; // Move to the next character
        }
        cout << endl; 
    }
}

