//
// Created by w01164264 on 10/17/2017.
//

#include "Distance.h"

/**
 * Distance: Default constructor
 */
Distance::Distance() : feet(0), inches(0.0) {}

/**
 * Distance: 2 Argument constructor
 * @param feet : What to set as feet
 * @param inches : What to set as inches
 */
Distance::Distance(int feet, float inches) : feet(feet), inches(inches) {}

/**
 * Distance: Getter (feet)
 * @return : value in feet
 */
int Distance::getFeet() const
{
    return feet;
}

/**
 * Distance : Setter (feet)
 * @param feet : What to set as feet
 */
void Distance::setFeet(int feet)
{
    Distance::feet = feet;
}

/**
 * Distance : Getter (inches)
 * @return : value in feet
 */
float Distance::getInches() const
{
    return inches;
}

/**
 * Distance : Setter (inches)
 * @param inches : What to set as inches
 */
void Distance::setInches(float inches)
{
    Distance::inches = inches;
}

/**
 * Distance : Overloaded ==
 * @param rhs
 * @return : if is == or not
 */
bool Distance::operator==(const Distance &rhs) const
{
    return feet == rhs.feet &&
           inches == rhs.inches;
}

/**
 * Distance : Overloaded !=
 * @param rhs
 * @return :  if is != or not
 */
bool Distance::operator!=(const Distance &rhs) const
{
    return !(rhs == *this);
}

DistSign::DistSign()
{
    sign = pos;
}

DistSign::DistSign(int feet, float inches, posneg sign) : Distance(feet, inches), sign(sign) {}

posneg DistSign::getSign() const
{
    return sign;
}

void DistSign::setSign(posneg sign)
{
    DistSign::sign = sign;
}



