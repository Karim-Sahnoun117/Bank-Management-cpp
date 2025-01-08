#ifndef PERSONNE_H_INCLUDED
#define PERSONNE_H_INCLUDED
#include<string>
using namespace std ;

class Personne {

protected :
    string name ;
    int ID ;

    public :
Personne(string _name , int _ID):name(_name),ID(_ID){}
virtual void affiche()const = 0;

string get_name(){return name ;}
int  get_ID(){return ID ;}

};

#endif // PERSONNE_H_INCLUDED
