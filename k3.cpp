#include <iostream>
#include <string>
#include <array>

using namespace std;

int main() 
{
    int num;
    // Prompt user to enter information

    cout << "Enter number of student." << endl;
    cin >> num;
    string student [num][6];

    for (int i =0; i < num; i++)
    {
        cin.ignore(); 
        cout << "Enter name: ";
        getline(cin, student[i][0]);

        cout << "Enter sex: ";
        getline(cin, student[i][1]);

        cout << "Enter nationality: ";
        getline(cin, student[i][2]);

        cout << "Enter age: ";
        cin >> student[i][3];

        cout << "Enter kebele: ";
        cin.ignore(); // Ignore newline character
        getline(cin, student[i][4]);

        cout << "Enter house number: ";
        cin >> student[i][5];

    }


    // Display information in tabular form
    cout << "\nName\t\tSex\tNationality\tAge\tAddress\n";
    cout << "--------------------------------------------------------\n";
    for(int i=0; i <num; i++)
        if(student[i][1][0]=='f' || student[i][1][0]=='F')
            cout << student[i][0] << "\t\t" << student[i][1] << "\t" << student[i][2] << "\t\t" << student[i][3] << "\t" << student[i][4] << ", House No. " << student[i][5] << endl;

    return 0;
} 
