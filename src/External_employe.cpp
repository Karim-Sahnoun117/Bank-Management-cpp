#include<iostream>
#include "../header/External_employe.h"
#include "../header/Employe.h"
#include <vector>

using namespace std ;

void External_employe::affiche()  {
    for (unsigned i = 0; i < tab1.size(); ++i) {

        tab1[i]->affiche();

    }
}
void External_employe::ajout_employe(Employe & s)
{
   Personne * p = new Employe(s);
   tab1.push_back(p);

}
void External_employe :: delete_employe ()
{
string nom ;
cout<<"donner le nom d'employer a supprimer "<<endl;

cin>> nom;
for (unsigned i=0;i<tab1.size();++i){
    if (tab1[i]->get_name()==nom)
        {
        tab1.erase(tab1.begin()+ i);
        cout << "le nom a ete effa�e avec succes"<<endl;
        }

}

}
