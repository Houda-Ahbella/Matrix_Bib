#include "pch.h"
#include "Matrix.h"
#include <iostream>
#include <assert.h>
using namespace std;
using namespace Algebre;
Matrix::Matrix(int c, int l)
{
    this->col = c;
    this->lig = l;
    this->Matrice = new int* [this->lig];
    for (int i = 0; i < this->lig; i++) 
    {
        this->Matrice[i] = new int[this->col];
        for (int j = 0; j < this->col; j++)
            this->Matrice[i][j] = 0;
    }
}

void Matrix::Remplissage(int nmbr)
{
    
 
    for (int i = 0; i < this->lig; i++)
    {
        
        for (int j = 0; j < this->col; j++)
            this->Matrice[i][j] = nmbr;
    }

}

Matrix& Matrix::operator+(const Matrix& M) const
{
    assert(this->col == M.col && this->lig == M.lig);
    try
    {
        if (this->col == M.col && this->lig == M.lig)
        {
            Matrix* matric = new Matrix(this->col, this->lig);
            matric->Remplissage(this->Matrice[0][0] + M.Matrice[0][0]);
            return *matric;
        }
        else throw "impossible de additionner deux matrices de taille differentes\n";

    }
    catch (char*e)
    {
       cout << e << endl;
    }
    
}

Matrix& Matrix::operator-(const Matrix& M) const
{   
    Matrix* matric = new Matrix(this->col, this->lig);
    assert(this->col == M.col && this->lig == M.lig);
  
    try
    {
        if (this->col == M.col && this->lig == M.lig)
        {
            
            matric->Remplissage(this->Matrice[0][0] - M.Matrice[0][0]);
            return *matric;
        }
        else throw "impossible de additionner deux matrices de taille differentes\n";

    }
    catch (char* e)
    {
        cout << e << endl;
    }
}

Matrix& Matrix::operator*(const Matrix&M) const
{
    Matrix* produit = new Matrix( M.col ,this->lig);
    assert(this->lig == M.col && this->col == M.lig);
    try
    {
        if (this->lig == M.col && this->col == M.lig)
            produit->Remplissage(this->col *this->Matrice[1][1] * M.Matrice[1][1]);
        else throw "impossible de multiplier ces deux matrices \n";
    }
    catch (char* e)
    {
        cout << e << endl;
    }
}

void Algebre::Matrix::operator*(int nmbr) 
{
    this->Remplissage(nmbr * this->Matrice[0][0]);
}

void Matrix::print() const
{
    for (int i = 0; i < this->lig; i++)
    {
        for (int j = 0; j < this->col; j++)
            cout << this->Matrice[i][j] << "\t";
        cout << "\n";
            
    }
}

Matrix::~Matrix()
{
    if (this->Matrice != nullptr)
    {
        for (int i = 0; i < this->lig; i++)
        {
            if (this->Matrice[i] != nullptr)
            {
                delete this->Matrice[i];
                this->Matrice[i] = nullptr;
            }
                
        }
        delete this->Matrice;
        this->Matrice = nullptr;
    }
    
}
