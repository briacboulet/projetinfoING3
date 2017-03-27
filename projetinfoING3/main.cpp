#include <iostream>
#include "Grille.hpp"
#include "Navire.hpp"
#include "Cuirasse.hpp"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;


    //Console* pConsole = NULL;
    //pConsole = Console::getInstance();

Grille g;
    g.Allouer_grilles();
    g.Initialisation_grilles();
    g.Afficher_grille();

Navire n;
//n.Positionnement_Navires();

//g.Afficher_grille();



//    /*
    Cuirasse c( 7, 0, 9, 1);
 cout << c.getlong() <<"long : "<< endl;
  cout << c.getlong_moitie() <<"long : "<< endl;
  cout << c.getorientation() <<"orient: "<< endl;
 cout << c.getrayonAttaque()<<"att "<<endl;
cout << c.getnb_navire()<< "nb "<<endl;//*/
//*
n.Positionnement_Navires();
n.Tirer();
//g.PlacerNavire();

    //int typeclear;
    //cin >> typeclear;
    //pConsole::clearconsole(typeclear)
//    clearconsole(2);
    return 0;
}
