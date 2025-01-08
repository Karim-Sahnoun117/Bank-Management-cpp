#include <iostream>
#include "Employe.h"
#include "Personne.h"
#include "External_employe.h"
#include "Client.h"
#include "account_manag.h"
#include"configuration.h"
#include<fstream>
using namespace std;



void read_data(External_employe &obj_1,account_manag * obj_2 = nullptr)
{

ifstream fichier("config.txt");
//initialisation des variables lié a la classe de declaration
//Employe Ibrahim 13 Technicien 1000
if (!fichier.is_open())
{
    cerr<<"le fichier n'est pas ouvert"<<endl;
}
    //External_employe obj_1; //creation d'instance obj_1 pour gérer les employées
    //account_manag obj_2; //creation d'instance obj_1 pour gérer les employées
string type;
string name;
int ID;
string poste;
int salaire;
int account ;

while (fichier >> type)
    {
      if (type == "Employe")
      {
        fichier>>name>>ID>>poste>>salaire;
        Employe e(name,ID,poste,salaire);
        obj_1.tab1.push_back(new Employe(e));

      }
  else if (type == "Client")
      {
         fichier>>name>>ID>>account;
        Client f(name,ID,account);
        obj_2->tab2.push_back(new Client(f));
      }


    }
    fichier.close();
}
