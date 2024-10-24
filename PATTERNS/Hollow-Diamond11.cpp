#include <iostream>
using namespace std;

int main() {
    int n = 4; // Number of rows for half of the diamond

    // Top half of the diamond
    for (int i = 0; i < n; i++) {
        // Print leading spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        // Print first star
        cout << "*";

        // Print spaces between stars, only if i > 0 (not in the first row)
        if (i != 0) {
            for (int j = 0; j < 2 * i - 1; j++) {
                cout << " ";
            }
            // Print second star
            cout << "*";
        }

        // Move to the next line
        cout << endl;
    }

    // Bottom half of the diamond
    for (int i = n - 2; i >= 0; i--) {
        // Print leading spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        // Print first star
        cout << "*";

        // Print spaces between stars, only if i > 0
        if (i != 0) {
            for (int j = 0; j < 2 * i - 1; j++) {
                cout << " ";
            }
            // Print second star
            cout << "*";
        }

        // Move to the next line
        cout << endl;
    }

    return 0;
}

