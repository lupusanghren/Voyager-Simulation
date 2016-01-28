#include "Matrice.h"

Matrice::Matrice(int a, int b)
{
    double** m = new double*[a];
    for(int i=0; i<nl ; i++){
        m[i] = new double[b];
    }
    for(int i=0; i<a ; i++){
        for(int j=0; j<b ; j++){
            m[i][j]=0;
        }
    }
    matrix = m;
}

Matrice::~Matrice()
{
    //dtor
}

Matrice operator*(Matrice A, Matrice B){
    int nlA, ncA, nlB, ncB;
    A.GetSize(nlA, ncA);
    B.GetSize(nlB, ncB);
    Matrice result(nlA, ncB);
    double** m = new double*[nlA];
    for(int i=0; i<nlA ; i++){
        m[i] = new double[ncB];
    }
    for(int i=0; i<nlA ; i++){
        for(int j=0; j<ncB ; j++){
            for(int k=0; k<ncA ; k++){
                m[i][j]+=(A.GetValue(i,k))*(B.GetValue(k,j));
            }
        }
    }
    result.Set(m);
    }
