//
// Created by bigle on 10/19/2017.
//

#include "Laborer.h"

void Foreman::setData()
{
    Laborer::setData();
    cout << "\nEnter Quotas: ";
    cin >> quotas;
}

void Foreman::getData()
{
    Laborer::getData();
    cout << "\nQuotas: " << quotas << endl;
}
