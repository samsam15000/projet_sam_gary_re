#include "Vecteur.h"
#include <iostream>

using namespace std;
Vecteur::Vecteur(int dim)
{
    this -> dim = dim;
    tab = new float[dim];
    for (int i = 0;i<dim;i++)
    {
        tab[i] = 0;
    }
}

Vecteur :: Vecteur(int dim, float *tab )
{
    this -> dim = dim;
    this-> tab = tab;
    tab = new float[dim];
    for (int i = 0;i<dim;i++)
    {
        tab[i] = tab[i];
    }
}
Vecteur::Vecteur(const Vecteur& v)
{
    dim = v.dim;
    for (int i = 0;i<dim;i++)
    {
        tab[i] = v.tab[i];
    }
}
void Vecteur:: affiche()
{
    cout<<"la dimension du vecteur est " << dim <<endl;
    for (int i = 0;i<dim;i++)
    {
        cout<<"|"<<tab[i]<<"|"<<endl;
    }
}
Vecteur::~Vecteur()
{
    delete [] tab;
}
Vecteur &Vecteur::operator=(const Vecteur&v)
 {
     if(v.dim != dim)
     {
         cout<<"Erreur de dimension"<<endl;
     }
     dim = v.dim;
     tab = v.tab;
     return *this;
 }
Vecteur &Vecteur:: operator + (const Vecteur& v)
{
    if (v.dim != dim)
    {
        cout<<"Erreur de dimension"<<endl;
    }
    for (int i = 0;i<dim;i++)
    {
        this ->tab[i] = tab[i] + v.tab[i];
    }
    return *this;
}
Vecteur &Vecteur:: operator - (const Vecteur& v)
{
    if (v.dim != dim)
    {
        cout<<"Erreur de dimension"<<endl;
    }
    for (int i = 0;i<dim;i++)
    {
        this ->tab[i] = tab[i] - v.tab[i];
    }
    return *this;
}
float & Vecteur:: operator [] (int i )
{
    return  tab[i];
}
