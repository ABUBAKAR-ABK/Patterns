#include <iostream>
using namespace std;

int main() {
    int n = 4; 

    for (int i = 0; i < n; i++) {
        // Print leading spaces (n - i - 1)
        for (int j = 0; j < n - i - 1; j++) {
            cout << " "; // Print space for alignment
        }

        // Print increasing numbers (1 to i + 1)
        for (int j = 1; j <= i + 1; j++) {
            cout << j; // Print increasing number
        }

        // Print decreasing numbers (i to 1)
        for (int j = i; j > 0; j--) {
            cout << j; // Print decreasing number
        }

        cout << endl; /
    }

    return 0; 
}

