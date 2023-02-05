//
// Created by Simon on 05/02/2023.
//

#include "FicheSalaire.h"
#include <iostream>

int maint() {
    FicheSalaire ficheSalaire(40, 15);
    std::cout << "Le salaire est de " << ficheSalaire.calculerSalaire() << " euros." << std::endl;
    return 0;
}