// File: TestMultiInheritance
// Created by Sean Bigler on 10/19/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>

using namespace std;

// Global, Constants, Structures
class A
{
public:
    void Show();
};
class B
{
public:
    void Show();
};
class C : public A, public B
{

};

void B::Show()
{
    cout << "Class B" << endl;
}

void A::Show()
{
    cout << "Class A" << endl;
}

// Prototypes


// Main Program Program
int main()
{
    C objC;     // Object C
    // No good
    //objC.Show();
    objC.A::Show();


    return 0;
}

// Function Definitions