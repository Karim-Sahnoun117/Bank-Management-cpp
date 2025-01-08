#ifndef CLIENT_H_INCLUDED
#define CLIENT_H_INCLUDED
#include "Personne.h"
#include <string>
using namespace std ;

class Client : public Personne
{
private :
int account ;
public :
Client(string _name,double _ID,int _account):Personne(_name,_ID),account(_account){}

void affiche ()const override ;

int get_account()&{return account;}
void set_account(int _account)&{ account =_account ;}


};


#endif // CLIENT_H_INCLUDED
