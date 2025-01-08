#ifndef EXTERNAL_EMPLOYE_H_INCLUDED
#define EXTERNAL_EMPLOYE_H_INCLUDED
#include<vector>
#include"Employe.h"
using namespace std ;


class External_employe {

public :

vector<Personne*>tab1;

void affiche();
void ajout_employe(Employe & s);
void delete_employe();
};

#endif // EXTERNAL_EMPLOYE_H_INCLUDED
