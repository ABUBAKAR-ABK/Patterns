#include <iostream>
using namespace std;

int main() {
    int num = 1; // Starting number

    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j > 0; j--) {
            cout << num << " "; // Print the current number
            num++; // Increment the number for the next output
        }
        cout << endl; 
    }

    return 0; 
}

