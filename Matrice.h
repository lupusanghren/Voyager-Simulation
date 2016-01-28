#ifndef MATRICE_H
#define MATRICE_H


class Matrice
{
    public:
        Matrice(int a, int b);
        virtual ~Matrice();
        double GetValue(int a,int b) { return matrix[a][b]; }
        void GetSize(int& a, int& b) {b=nl;a=nc;}
        void Set(double** val) { matrix = val; }


    protected:
    private:
        double** matrix;
        int nl;
        int nc;
};

Matrice operator*(Matrice A, Matrice B);

#endif // MATRICE_H
