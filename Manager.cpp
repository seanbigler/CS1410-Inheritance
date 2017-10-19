//
// Created by bigle on 10/19/2017.
//

#include "Manager.h"

void Manager::setData()
{
    Employee::setData();
    cout << "\nEnter your title: ";
    cin >> title;
    cin.ignore();
    cout << "\nEnter golf club dues: ";
    cin >> dues;
}

void Manager::getData()
{
    Employee::getData();
    cout << "\n Title: " << title << endl;
    cout << "Golf Dues: " << dues << endl;

}
