#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int rows = 8;
    int spaces = rows - 1;

    
    for (int i = 0; i < rows; i++) {
        // Print spaces
        for (int j = 1; j <= spaces; j++) 
        {
            cout << " ";
        }
        spaces --;
        // Print digits up to middle
        for (int j = 0; j <= i; j++) 
        {
            cout << pow(2, j);
            
        }
        
        // Print digits after middle
        for (int j = i-1; j >=0; j--) 
        {
            cout << pow(2, j);
            
        }
        cout << endl;

    }
    
    return 0;
} 