#include <iostream>
using namespace std;

int main() {
    int n = 4; // Number of rows for the pattern

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << i + 1 << " "; // Print the row number (i + 1)
        }
        cout << endl; 
    }

    return 0; 
}

