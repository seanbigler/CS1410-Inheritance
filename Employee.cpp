//
// Created by bigle on 10/19/2017.
//

#include "Employee.h"

void Employee::setData()
{
    cout << "\n Enter last name: ";
    cin >> name;
    cin.ignore();
    cout << "\nEnter ID Number: ";
    cin >> number;
}

void Employee::getData()
{
    cout << "\nName: " << name << endl;
    cout << "ID Number: " << number;
}
