#ifndef SONDE_H
#define SONDE_H

#include "Astre.h"
#include "Matrice.h"

class Sonde
{
    public:
        Sonde(Astre* a, int nbA);
        virtual ~Sonde();
        int GetnbAstres() { return nbAstres; }
        void SetnbAstres(int val) { nbAstres = val; }
        Astre* Getastre() { return astre; }
        double Gett() { return t; }
        double* Getd() { return d; }
        void EDP(double t, double* X, double* dX);
    protected:
    private:
        int nbAstres;
        Astre *astre;
        double t;
        double* d;
};

#endif // SONDE_H
