#include <iostream>
using namespace std;

int main() {
    int n = 5; // Number of rows for the triangle

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "*"; // Print asterisk for each column in the current row
        }
        cout << endl; 
    }

}

