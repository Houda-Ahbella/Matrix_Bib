#pragma once
namespace Algebre {
	class Matrix
	{
	private:
		int col;
		int lig;
		int** Matrice;
	public:
		Matrix(int c = 0, int l = 0);
		Matrix(const Matrix&) = delete;
		Matrix& operator=(const Matrix) = delete;
		void Remplissage(int nmbr);
		Matrix& operator+(const Matrix&) const;
		Matrix& operator-(const Matrix&) const;
	    Matrix& operator*(const Matrix&) const;
		void operator*(int nmbr);
		void print() const;
		~Matrix();

	};
};
