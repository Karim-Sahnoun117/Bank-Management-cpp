#ifndef EMPLOYE_H_INCLUDED
#define EMPLOYE_H_INCLUDED

#include "Personne.h"

using namespace std ;
class Employe : public Personne {

public :
string poste;
double salary ;

Employe(string _name,int _ID,string _poste, double _salary):Personne(_name,_ID),poste(_poste),salary(_salary){}
~Employe(){}
void ajout_employe();
void affiche ()const override ;


};

#endif // EMPLOYE_H_INCLUDED
