#include <iostream>
using namespace std;

int main() {
    int n = 4; // Number of rows for the pattern

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j > 0; j--) {
            cout << j << " "; // Print numbers from (i + 1) down to 1
        }
        cout << endl; 
    }

    return 0;
}

