// File: Diamond.cpp
// Created by Sean Bigler on 10/19/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>

using namespace std;

// Global, Constants, Structures
class A
{
public:
    void func();
};
class B: public A
{
};
class C: public A
{
};
class D : public B, public C
{

};

// Prototypes


// Main Program Program
int main()
{
    D objD;
    // objD.func();     -Ambiguous. Won't compile
    return 0;
}

// Function Definitions