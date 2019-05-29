// Bryan Carranza
// This program will ask the user to input salesperson’s gross sales for last week and calculates and displays the salesperson’s earnings (the salespeople each receive $200 per week plus 9% of their gross sales for that week). For only 10 sales people or less.

#include <iostream>
#include <iomanip>
#include <string>
#include <array>

using namespace std;

int main() // opens main program function
{
    cout << endl << "---WELCOME TO THE WEEKLY EARNINGS REPORT GENERATOR---"<< endl; // outputs welcome message
    
    int i,n = 0; // initializes variables i and n and sets them to 0
    string *s; // initializes string variable *s
    double money[10]; // initializes variable money and allows for up to 10 entries
    double *earning; // initializes variable *earning
    int resultI; // initializes variable resultI
    
    cout << endl << "---Please enter the number of sales people you for which you want a report.---"<< endl; // output prompts user to enter the number of salespeople for calculation
    cout << "---(Select a number between 0 and 10)---"<< endl; // output specifies range of input
    cout << "Number of salespeople: "; // prompt line for user input
    cin >> i; // receives user input and stores in variable i
    
    try{ // try...catch block in case user input is out of specified range
        if (i < 1 || i > 10) // if statement to determine range of input
        {
            throw i; // throws error if input is out of range
        }
        resultI = i; // stores input in variable resultI
    }
    catch (int invalidI) // catches invalid input
    {
        cout << endl << "Sorry, the number you entered is too high. Please re-run the program and enter a number between 0 and 10." << endl; // outputs error message if user input is out of range
        return 0; // end of catch function
    }
    
    s = new string[i]; // initializes variable s as new string array
    earning = new double [n]; // initializes variable earning
    
    for (n = 0; n < i; n++) // for loop to allow input for set number of users
    {
        cout << endl << "Enter the name of salesperson " << n + 1 << ": "; // prompts user to input name of salesperson
        cin >> s[n]; // receives user input and stores it in array
        cout << "Enter the total sales: $" ; // prompts user to input the earnings amount for each salesperson
        cin >> money[n]; // receives user input and stores it in array
    }
    
    for (n = 0; n < i; n++) // for loop to calculate earnings for each salesperson entered
    {
        earning[n] = money[n] * .09 + 200 ; // calculates the total earnings with 200 being the base salary and 9% commission.
    }
    
    for (n = 0; n < i; n++) // for loop to output earnings of each salesperson entered
    {
        cout << s[n] << " earned a total of " << "$" << earning[n]  << setprecision(2)<< fixed << " this week."  << endl; // outputs calculated earnings of each salesperson
    }
    
    system("pause");
    
    return 0;
}

