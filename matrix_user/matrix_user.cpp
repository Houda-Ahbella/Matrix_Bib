// matrix_user.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Matrix.h"
using namespace Algebre;

int main()
{
    Matrix<int> M1(2,2) ;
    M1.Remplissage(5);
    M1.print();

    Matrix<int> M2(2, 2);
    M2.Remplissage(10);
    M2.print();

    (M1 + M2).print();
    (M1 - M2).print();

    Matrix<double> M3(3, 2);
    M3.Remplissage(5.3);
    M3.print();

    Matrix<string> M4(2, 3);
    M4.Remplissage("houda");
    M4.print();

   

   
    

}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
