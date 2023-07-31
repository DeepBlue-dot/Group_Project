// This program takes a character input and creates a diamond shape using letters from the alphabet
#include <iostream>

using namespace std;

int main() 
{
    // Declare variables
    char letter, limit;
    int space = -1;
    
    // Get input from user
    cout << "Enter a letter or a digit: " << endl;
    cin >> letter;

    // Determine the limit based on the input
    if(letter >= '1' && letter <= '9')
    {
        limit = '0';

    }
    else if(letter >= 'a' && letter <= 'z')
    {
        limit = 'a';
    }
    else if(letter >= 'A' && letter <= 'Z')
    {
        limit = 'A';
    }
    else
    {
        cout << "Invalid input." << endl;
        return 0;
    }
    
    // Create the top half of the diamond
    for(char i = letter; i>=limit; i--)
    {
        // Print the letters in increasing order
        for(char j=limit; j <= i; j++)
        {
            cout << j;
        }

          // Print the spacing
        for(int k=0; k<space; k++)
        {
            cout << " ";
        }
        // Print the letters in descending order, skipping the input letter
        for(char j=i; j>=limit; j--)
        {
            if(j < letter)
                cout << j;
        }
        space+=2;
        cout << endl;
    }
    
    // Decrease the space between characters for the bottom half of the diamond
    space -=4;
    
    // Create the bottom half of the diamond
    for(char i = limit+1; i<=letter; i++)
    {
        // Print the letters in increasing order
        for(char j=limit; j <= i; j++)
        {
            cout << j;
        }

        // Print the spaceing
        for(int k=space; k>0; k--)
        {
            cout << " ";
        }

        // Print the letters in descending order, skipping the input letter
        for(char j=i; j>=limit; j--)
        {
            if(j < letter)
                cout << j;
        }
        cout << endl;
        space-=2;
    }
    
    return 0;
}