#include <iostream>
#include "Vecteur.h"
using namespace std;
struct Etudiant
{
    string nom;
    string prenom;
    int numero;
};
int main()
{
    float tab[4] = {0,1,2,3};
    float tab2[4] = {1,5,8,4};
    Vecteur V(4,tab);
    Vecteur U(4,tab2);
    Vecteur W(4);
    (V-U).affiche();
    U[2] = 0;
    U.affiche();
    return 0;
}
