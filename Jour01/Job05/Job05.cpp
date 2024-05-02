#include <iostream>

using namespace std;

int main() {
    // Déclaration des variables pour stocker les nombres
    double nombre1, nombre2;

    // Demande à l'utilisateur d'entrer les deux nombres
    cout << "Entrez le premier nombre : ";
    cin >> nombre1;

    cout << "Entrez le deuxième nombre : ";
    cin >> nombre2;

    // Calcul du produit
    double produit = nombre1 * nombre2;

    // Affichage du produit
    cout << "Le produit de " << nombre1 << " et " << nombre2 << " est : " << produit << endl;

    return 0;
}
