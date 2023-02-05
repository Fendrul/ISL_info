#include "FicheSalaire.h"

FicheSalaire::FicheSalaire(int nombreHeuresPrestees, int coutHeure)
{
    this->nombreHeuresPrestees = nombreHeuresPrestees;
    this->coutHeure = coutHeure;
}

int FicheSalaire::calculerSalaire()
{
    return nombreHeuresPrestees * coutHeure;
}