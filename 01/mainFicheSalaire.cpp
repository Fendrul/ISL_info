//
// Created by Simon on 05/02/2023.
//

#include "FicheSalaire.h"
#include <iostream>

//create a namespace for std
using namespace std;

int maint() {
    FicheSalaire ficheSalaire(40, 15);
    cout << "Le salaire est de " << ficheSalaire.calculerSalaire() << " euros." << std::endl;
    return 0;
}