//Create the ehader FicheSalaire
#ifndef FICHE_SALAIRE_H
#define FICHE_SALAIRE_H
class FicheSalaire
{
private:
    int nombreHeuresPrestees;
    int coutHeure;

public:
    FicheSalaire (int nombreHeuresPrestees, int coutHeure);
    int calculerSalaire();
};

#endif /* FICHE_SALAIRE_H */