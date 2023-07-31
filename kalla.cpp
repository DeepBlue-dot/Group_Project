// This program takes a character input and creates a diamond shape using letters from the alphabet
#include <iostream>

using namespace std;

int main() 
{
    // Declare variables
    int letter;
    
    // Get input from user
    cout << "Enter a letter or a digit: " << endl;
    cin >> letter;

    
    // Create the top half of the diamond
    for(int i = 1; i<=letter; i++)
    {
        // Print the letters in increasing order
        for(int j=; j <= i; j++)
        {
            cout << j;
        }

          // Print the spacing
        for(char j=i; j>=limit; j--)
        {
            if(j < letter)
                cout << j;
        }
        cout << endl;
    }
    
    return 0;
}