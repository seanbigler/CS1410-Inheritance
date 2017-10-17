//
// Created by w01164264 on 10/17/2017.
//

#include "Counter.h"
// Doxygen comments. Type /*! or /** followed by Enter
/*!
 * Counter: 1 Parameter constructor
 * @param count
 */
Counter::Counter(unsigned int count) : count(count) {}

/**
 * Counter: Default constructor
 */
Counter::Counter(): count(0) {}

/**
 * getCount: Getter for count variable
 *
 * @return: current count
 */
unsigned int Counter::getCount() const
{
    return count;
}

/**
 * setCount: Setter for count variable
 * @param count : Number to set counter
 */
void Counter::setCount(unsigned int count)
{
    Counter::count = count;
}

/**
 * ++ Operator : Increments counter
 * @return : ++count
 */
Counter Counter::operator++()
{
    return Counter(++count);
}

/**
 * -- Operator: Decrements counter
 * @return : --count
 */
Counter CountDn::operator--()
{
    return Counter(--count);
}

/**
 * CountDn default constructor
 */
CountDn::CountDn() : Counter() {}

/**
 * CountDn one parameter constructor
 * @param count : Initial Counter
 */
CountDn::CountDn(unsigned int count) : Counter(count) {}
