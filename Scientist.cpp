//
// Created by bigle on 10/19/2017.
//

#include "Scientist.h"

void Scientist::setData()
{
    Employee::setData();
    cout << "\nEnter the number of publications: ";
    cin >> pubs;
    cin.ignore();
}

void Scientist::getData()
{
    Employee::getData();
    cout << "\nNumber of publications: " << pubs << endl;
}
