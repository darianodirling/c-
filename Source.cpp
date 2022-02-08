#include <iostream>
#include <string>
using namespace std;

void menu()
{
    cout << endl;
    cout << "Select the menu item you would like to use:\n";
    cout << "1.) Total pay in a summer internship\n";
    cout << "2.) Total pay in a work year (part time)\n";
    cout << "3.) Total pay in full time year\n";
    cout << "4.) Total pay in semester \n";
    cout << "5.) All of the above\n";
    cout << "6.) Custom\n";
    cout << "\n";

}

void summer(double pay)
{
    double grossPay = pay * 40 * 10;
    double netPay = grossPay * .7827;
    cout << "Gross pay for a 10 week summer internship working 40 hours a week is: " << grossPay << endl;
    cout << "Your estimated net pay is: " << netPay << endl;
    cout << "\n";

}

void partTime(double pay)
{
    double grossPay = pay * 20 * 50;
    double netPay = grossPay * .7827;
    cout << "Gross pay for a 20 hours a week schedule over 1 year is with 2 weeks of unpaid vacation is: " << grossPay << endl;
    cout << "Your estimated net pay is: " << netPay << endl;
    cout << "\n";
}

void fullTime(double pay)
{
    double grossPay = pay * 40 * 52;
    double netPay = grossPay * .7827;
    cout << "Gross pay for a year 40 hours a week is: " << grossPay << endl;
    cout << "Your estimated net pay is: " << netPay << endl;
    cout << "\n";
}

void semester(double pay)
{
    double grossPay = pay * 20 * 18;
    double netPay = grossPay * .7827;
    cout << "Gross pay for a 20 hours a week schedule over a semester is: " << grossPay << endl;
    cout << "Your estimated net pay is: " << netPay << endl;
    cout << "\n";
}
void custom(double pay, double hours, double weeks)
{
    double grossPay = pay * hours * weeks;
    double netPay = grossPay * .7827;
    cout << "Total gross pay: " << grossPay << "\n Total net pay: " << netPay << endl;
}

int main()
{
    while (true)
    {
        int input = 0;
        double pay;
        menu();
        do
        {
            cin >> input;

        } while (input > 6 || input < 0);


        switch (input)
        {
        case 1:
            cout << "Input hourly pay: ";
            cin >> pay;
            summer(pay);
            break;
        case 2:
            cout << "Input hourly pay: ";
            cin >> pay;
            partTime(pay);
            break;
        case 3:
            cout << "Input hourly pay: ";
            cin >> pay;
            fullTime(pay);
            break;
        case 4:
            cout << "Input hourly pay: ";
            cin >> pay;
            semester(pay);
            break;
        case 5:
            cout << "Input hourly pay: ";
            cin >> pay;
            summer(pay);
            partTime(pay);
            fullTime(pay);
            semester(pay);
            break;
        case 6:
            double customWeeks, hours;
            cout << "Input hourly pay: ";
            cin >> pay;

            cout << "Input weeks: "; 
            cin >> customWeeks;

            cout << "Input hours per weeks: ";
            cin >> hours;
            custom(pay, hours, customWeeks);
            break;

        default:
            break;
        }
    }

}