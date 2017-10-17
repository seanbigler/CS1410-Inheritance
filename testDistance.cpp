// File: testDistance
// Created by Sean Bigler on 10/17/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>
#include "Distance.h"
using namespace std;

// Main Program
int main()
{
    Distance d1;
    Distance d2(6, 4.0);

    cout << "Distance D1 feet: " << d1.getFeet() << endl;
    cout << "Distance D1 inches: " << d1.getInches() << endl;

    cout << "Distance D2 feet: " << d2.getFeet() << endl;
    cout << "Distance D2 feet: " << d2.getInches() << endl;



    return 0;
}

// Function Definitions