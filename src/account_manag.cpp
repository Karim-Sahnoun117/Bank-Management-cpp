#include "account_manag.h"
#include <vector>
#include<iostream>

using namespace std ;

void account_manag ::ajout_client(Client & obj)
{
    Personne *p= new Client(obj);
    tab2.push_back(p);

}
void account_manag :: affiche()const
{
for (auto & d : tab2)
    {
    d->affiche();
    }
}
void account_manag :: delete_client(Client & obj)
{
    string _nom;
    cout<<"donner le client pour l'effacer "<<endl;
    cin>>_nom;

for (unsigned i=0; i<tab2.size();++i)
    {
    if (tab2[i]->get_name()==_nom)
        {
        tab2.erase(tab2.begin()+ i);
        cout <<"le client a eté effacé avec succes "<<endl;
        }
    }
}
void account_manag :: depot (Client &obj,int  n)
{

   int solde =obj.get_account();
   {
        obj.set_account(solde+n);
    for (unsigned  i =0; i<tab2.size();++i)
    {
        if ((tab2[i]->get_name()==obj.get_name())&&(tab2[i]->get_ID()==obj.get_ID()))//extraction of the name and ID of the client
                                                                                    //and update the new data in the table
        {
             Client * s = dynamic_cast<Client *> (tab2[i]);

             s->set_account(solde + n);

        }
    }


    }
}

void account_manag :: retrait(Client & obj,int  n)
{
    int solde =obj.get_account();

    obj.set_account(solde-n);
    for(unsigned i = 0 ;i<tab2.size();++i)
    {
        if ((tab2[i]->get_name()==obj.get_name())&&(tab2[i]->get_ID()==obj.get_ID()))
        {
            Client * s = dynamic_cast<Client*>(tab2[i]);
            s->set_account(solde-n);

        }
    }


}

