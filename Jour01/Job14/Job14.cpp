#include <iostream>

using namespace std;

int main() {
    int nombre, nombreInverse = 0;

    // Demande à l'utilisateur d'entrer un nombre
    cout << "Entrez un nombre : ";
    cin >> nombre;

    // Copie du nombre original pour le stockage temporaire
    int nombreOriginal = nombre;

    // Inversion du nombre
    while (nombreOriginal != 0) {
        int chiffre = nombreOriginal % 10;
        nombreInverse = nombreInverse * 10 + chiffre;
        nombreOriginal /= 10;
    }

    // Affichage du nombre inversé
    cout << "Le nombre inverse est : " << nombreInverse << endl;

    return 0;
}
