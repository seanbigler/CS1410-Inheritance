//
// Created by bigle on 10/19/2017.
//

#ifndef INHERITANCE_EMPLOYEE_H
#define INHERITANCE_EMPLOYEE_H
#include <iostream>
using namespace std;

class Employee
{
private:
    string name;            // Employee Name
    unsigned long number;   // Employee ID
public:
    void setData();
    void getData();
};


#endif //INHERITANCE_EMPLOYEE_H
