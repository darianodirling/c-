//Darian O'Dirling
//CSCI 1010-002
//assignment 
//This is a simple calculator that uses an array and if statments
#include<iostream>
#include<math.h>

using namespace std;

int main(void) 
{
    cout << "****Welcome****" << endl;
    cout << "Please select from the menu below." << endl;

    string Operators[] = {"1. Addition", "2. Subtraction", "3. Multiplication", "4. Division"};

    cout << Operators[0] << endl;
    cout << Operators[1] << endl;
    cout << Operators[2] << endl;
    cout << Operators[3] << endl;
    
    double selection, operand1, operand2, solution;
    
    cin >> selection;

    if (selection == 1)
    {
        cout << " Please enter two operands" << endl;
        cin >> operand1>> operand2;
        
        solution = operand1 + operand2;
        cout << operand1 << " + " << operand2 << " = " << solution << endl;
    }
    else if (selection == 2) 
    {
        cout << " Please enter two operands" << endl;
        cin >> operand1>> operand2;
        
        solution = operand1 - operand2;
        cout << operand1 << " - " << operand2 << " = " << solution << endl;
    }
    else if (selection == 3) 
    {
        cout << " Please enter two operands" << endl;
        cin >> operand1>> operand2;
        
        solution = operand1 * operand2;
        cout << operand1 << " * " << operand2 << " = " << solution << endl;
    }
    else if (selection == 4) 
    {
        cout << " Please enter two operands" << endl;
        cin >> operand1>> operand2;
        
        solution = operand1 / operand2;
        cout << operand1 << " / " << operand2 << " = " << solution << endl;
    }
    else
    {
        cout << " Please enter from 1 to 4";
    }




}