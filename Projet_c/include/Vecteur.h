#ifndef VECTEUR_H
#define VECTEUR_H
#include <iostream>

using namespace std;

class Vecteur
{
    public:
        Vecteur(int);
        Vecteur(int, float* );
        Vecteur(const Vecteur& v);
        Vecteur& operator = (const Vecteur&);
        Vecteur& operator + (const Vecteur&);
        Vecteur& operator - (const Vecteur&);
        float & operator [] (int);
        virtual ~Vecteur();
        void affiche();
    protected:

    private:
        int dim;
        float *tab;
};

#endif // VECTEUR_H
