#ifndef ACCOUNT_MANAG_H_INCLUDED
#define ACCOUNT_MANAG_H_INCLUDED
#include <vector>
#include "Personne.h"
#include "Client.h"

using namespace std ;
class account_manag {
    public:
vector<Personne *> tab2;

void affiche()const;
void ajout_client(Client & obj);
void delete_client(Client & obj);
void depot (Client & obj,int n);
void retrait(Client & obj,int n);
};

#endif // ACCOUNT_MANAG_H_INCLUDED
