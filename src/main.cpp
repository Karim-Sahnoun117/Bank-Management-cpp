#include <iostream>
#include "../header/Employe.h"
#include "../header/Personne.h"
#include "../header/External_employe.h"
#include "../header/Client.h"
#include "../header/account_manag.h"
#include"../header/configuration.h"
using namespace std;

int main()
{
/*Employe S1 ("Ibrahim",13,"Technicien",1000);
Employe S2 ("Chedi",13,"Ing�nieur",1000);
Client  C1 ("Moez",120,200);
Client  C2 ("Bargaoui",60,100);
Client  C3 ("Helen",134,4000);
Client  C4 ("Yahya",1245,600);*/

External_employe K;
account_manag P;
read_data(K,P);//insertion de la data des employes

K.affiche();
cout<<"============"<<endl;
//P.affiche();
}
/*account_manag M;

M.ajout_client(C1);
M.ajout_client(C2);
M.ajout_client(C3);
M.affiche();
cout<<"================"<<endl;
//test pour depot
M.depot(C1,300);
M.depot(C2,400);
M.depot(C3,700);

M.affiche();
cout<<"================"<<endl;
//test pour retrait
M.retrait(C3,200);
M.affiche();








External_employe G;
G.ajout_employe(S1);
G.ajout_employe(S2);
G.affiche();

G.delete_employe();
cout<<"============="<<endl;
G.affiche();
}


*/






































