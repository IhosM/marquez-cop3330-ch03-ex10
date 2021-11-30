/*Write a program that takes an operation followed by two operands and
outputs the answerult. For example:
+ 100 3.14
* 4 5
 Read the operation into a string called operation and use an
if-statement to figure out which operation the user wants, for example,
if (operation=="+"). Read the operands into variables of type double.
Implement this for operations called +, –, *, /, plus, minus, mul, and div
with their obvious meanings
 */


#include "std_lib_facilities.h"

/*
  UCF COP3330 Fall 2021 Assignment 5 Solution Copyright 2021 Ihosvany Marquez
 */
int main()

{
    String operation;
    double integer1, integer2, answer;
  
    cout << "Enter operation then two integers: \n";
    cout << "Operation: ";
    cin >> operation;
    cout << "\nInteger 1: ";
    cin >> integer1; 
    cout << "\nInteger 2: ";
    cin >> integer2;

    if(operation == "+")
    {
      answer = integer1 + integer2;
    }

    else if(operation == "-")
    {
      answer = integer1 - integer2;
    }

    else if(operation == "*")
    {
      answer = integer1 * integer2;
    }
    
    else if(operation == "/")
    {
        answer = integer1 / integer2;
    }

    cout << "\n" << integer1 << " " << operation << " " << integer2 << " = " << answer;

    return 0;
}