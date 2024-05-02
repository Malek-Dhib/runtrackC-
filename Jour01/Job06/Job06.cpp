#include <iostream>

using namespace std;

int main() {
    int entier;

    // Demande à l'utilisateur d'entrer un entier
    cout << "Entrez un entier pour afficher sa table de multiplication : ";
    cin >> entier;

    // Affichage de la table de multiplication
    cout << "Table de multiplication de " << entier << ":" << endl;
    for (int i = 1; i <= 10; ++i) {
        cout << entier << " x " << i << " = " << (entier * i) << endl;
    }

    return 0;
}
