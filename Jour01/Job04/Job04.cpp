#include <iostream>

using namespace std;

int main() {
    // Déclaration des variables pour stocker les nombres
    int nombre1, nombre2;

    // Demande à l'utilisateur d'entrer les deux nombres
    cout << "Entrez le premier nombre : ";
    cin >> nombre1;

    cout << "Entrez le deuxième nombre : ";
    cin >> nombre2;

    // Calcul de la somme
    int somme = nombre1 + nombre2;

    // Affichage de la somme
    cout << "La somme de " << nombre1 << " et " << nombre2 << " est : " << somme << endl;

    return 0;
}
