//
// Created by bigle on 10/19/2017.
//

#ifndef INHERITANCE_SCIENTIST_H
#define INHERITANCE_SCIENTIST_H


#include "Employee.h"

class Scientist : public Employee
{
private:
    int pubs;       // publications
public:
    void setData();
    void getData();
};


#endif //INHERITANCE_SCIENTIST_H
