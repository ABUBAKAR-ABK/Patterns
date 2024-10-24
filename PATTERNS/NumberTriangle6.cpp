#include <iostream>
using namespace std;

int main() {
    int n = 4; // Number of rows for the pattern

    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= i + 1; j++) {
            cout << j; // Print numbers from 1 to (i + 1)
        }
        cout << endl; 
    }

    return 0; 
}

