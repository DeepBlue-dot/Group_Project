// This program allows the user to choose between two options:
// 1. Calculate savings without annual deposits, using a fixed interest rate
// 2. Calculate savings with annual deposits, using user-inputted values for principal, interest rate, annual deposit, and number of years
// The program prompts the user for input and uses a switch statement to execute the chosen option.
#include <iostream>
#include <cmath>

using namespace std;

// Function to calculate balance for each year using simple interest formula
void calcSimpleInterest(double* principal, int* year, double* rate) 
{
    double balance;
    for (int i = 1; i <= *year; i++) 
    {
        balance = *principal * pow((1 + *rate), i);
        cout << "Year " << i << ": $" << balance << endl;
    }
}

// Function to calculate balance for each year using compound interest formula
void calcCompoundInterest(double* principal, int* year, double* min_rate, double* max_rate, double* deposit) 
{
    double rate, balance;
    for (int i = 1; i <= *year; i++) 
    {
        rate = *min_rate + (*max_rate - *min_rate) * (i - 1) / (*year - 1);
        balance = *principal * pow(1 + rate / 100, i) + *deposit * ((pow(1 + rate / 100, i) - 1) / (rate / 100));
        cout << "Year " << i << ": $" << balance << endl;
    }
}

int main() {
    // Declare variables
    int choice;
    double principal, min_rate, max_rate, deposit,rate;
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
            // Prompt user for principal and number of years
            cout << "Enter the principal amount: $";
            cin >> principal;
            cout << "Enter the number of years: ";
            cin >> year;

            // Calculate balance using simple interest formula
            rate = 0.05;
            calcSimpleInterest(&principal, &year, &rate);
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

            // Calculate balance using compound interest formula
            calcCompoundInterest(&principal, &year, &min_rate, &max_rate, &deposit);
            break;

        default:
            cout << "Invalid choice" << endl;
            break;
    }

    return 0;
}