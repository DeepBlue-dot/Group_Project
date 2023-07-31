#include <iostream>

using namespace std;

int main()
{
    int choice;
    cout << "Choose an option:" << endl;
    cout << "1. Input number" << endl;
    cout << "2. Input character" << endl;
    cin >> choice;

    switch (choice)
    {
        case 1:
            int num;
            cout << "Input number: " << endl;
            cin >> num;
            for(int i = num; i>=0; i--)
            {
                for(int j=0; j <= i; j++)
                {
                    cout << j;
                }
                for(int k=0; k<2*(num-i); k++)
                {
                    cout << " ";
                }
                for(int j=i; j>=0; j--)
                {
                    cout << j;
                }
                cout << endl;
            }
            for(int i = 1; i<=num; i++)
            {
                for(int j=0; j <= i; j++)
                {
                    cout << j;
                }
                for(int k=0; k<2*(num-i); k++)
                {
                    cout << " ";
                }
                for(int j=i; j>=0; j--)
                {
                    cout << j;
                }
                cout << endl;
            }
            break;
        case 2:
            char ch;
            cout << "Input number: " << endl;
            cin >> ch;
            for(char i = ch; i>=0; i--)
            {
                for(int j=0; j <= i; j++)
                {
                    cout << j;
                }
                for(int k=0; k<2*(num-i); k++)
                {
                    cout << " ";
                }
                for(int j=i; j>=0; j--)
                {
                    cout << j;
                }
                cout << endl;
            }
            for(int i = 1; i<=num; i++)
            {
                for(int j=0; j <= i; j++)
                {
                    cout << j;
                }
                for(int k=0; k<2*(num-i); k++)
                {
                    cout << " ";
                }
                for(int j=i; j>=0; j--)
                {
                    cout << j;
                }
                cout << endl;
            }
        break;
    
        default:
            break;
    }
}