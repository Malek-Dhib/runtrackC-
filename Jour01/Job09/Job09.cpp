#include <iostream>

using namespace std;

int main() {
    int nombre1, nombre2, nombre3;

    // Demande à l'utilisateur d'entrer trois entiers
    cout << "Entrez le premier entier : ";
    cin >> nombre1;

    cout << "Entrez le deuxième entier : ";
    cin >> nombre2;

    cout << "Entrez le troisième entier : ";
    cin >> nombre3;

    // Détermine le plus grand des trois entiers
    int plusGrand = nombre1;

    if (nombre2 > plusGrand) {
        plusGrand = nombre2;
    }

    if (nombre3 > plusGrand) {
        plusGrand = nombre3;
    }

    // Affiche le plus grand des trois entiers
    cout << "Le plus grand des trois entiers est : " << plusGrand << endl;

    return 0;
}
