// This program allows the user to choose between two options:
// 1. Calculate savings without annual deposits, using a fixed interest rate
// 2. Calculate savings with annual deposits, using user-inputted values for principal, interest rate, annual deposit, and number of years
// The program prompts the user for input and uses a switch statement to execute the chosen option.
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Declare variables
    int choice;
    double principal, min_rate, max_rate, deposit, rate, balance;
    int year;

    // Prompt user for choice
    cout << "Choose an option:" << endl;
    cout << "1. Calculate savings without annual deposits" << endl;
    cout << "2. Calculate savings with annual deposits" << endl;
    cin >> choice;

    // Use switch statement to execute chosen option
    switch (choice)
    {
        case 1:

            rate = 0.05;

            // Prompt user for principal 
            cout << "Enter the principal amount: $";
            cin >> principal;
            
            // Prompt user for number of years 
            cout << "Enter the number of years: ";
            cin >> year;

            //calculate balance for each year using simple interest formula
            for(int i =1; i <= year; i++)
            {
                balance = principal * pow((1 + rate), i);
                cout << "Year " << i << ": $" << balance << endl; 
            }
            break;

        case 2:
            // Prompt user for input: principal amount, minimum interest rate, maximum interest rate, number of years, and annual deposit amount
            cout << "Enter the principal amount: $";
            cin >> principal;
            cout << "Enter the minimum interest rate (%): ";
            cin >> min_rate;
            cout << "Enter the maximum interest rate (%): ";
            cin >> max_rate;
            cout << "Enter the number of years: ";
            cin >> year;
            cout << "Enter the annual deposit amount: $";
            cin >> deposit;

            // Calculate and print balance for each year using compound interest formula
            for (int i = 1; i <= year; i++) 
            {
                rate = min_rate + (max_rate - min_rate) * (i - 1) / (year - 1);
                balance = principal * pow(1 + rate / 100, i) + deposit * ((pow(1 + rate / 100, i) - 1) / (rate / 100));
                cout << "Year " << i << ": $" << balance << endl;
            }

            break;

        default:
            cout << "Invalid choice" << endl;
            break;
    }

    return 0;
}