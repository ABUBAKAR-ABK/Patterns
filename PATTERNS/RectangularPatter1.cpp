#include <iostream> 
using namespace std; 

int main() 
{
    int i, j; 

    for (i = 1; i <= 4; i++) { // Outer loop for rows
        for (j = 1; j <= 4; j++) { // Inner loop for columns
            cout << j; // Print the value of j
        }
        cout << endl; 
    }
}

