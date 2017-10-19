//
// Created by bigle on 10/19/2017.
//

#ifndef INHERITANCE_MANAGER_H
#define INHERITANCE_MANAGER_H


#include "Employee.h"

class Manager : public Employee
{
private:
    string title;   // "president" etc.
    double dues;    // golf club dues
public:
    void setData();
    void getData();

};


#endif //INHERITANCE_MANAGER_H
