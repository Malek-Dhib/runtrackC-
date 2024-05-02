#include <iostream>

using namespace std;

int main() {
    int somme = 0; // Variable pour stocker la somme des entiers
    int entier;    // Variable pour stocker chaque entier saisi par l'utilisateur

    // Demande à l'utilisateur de saisir cinq entiers
    cout << "Entrez cinq entiers :\n";
    for (int i = 0; i < 5; ++i) {
        cout << "Entier " << (i + 1) << " : ";
        cin >> entier;

        somme += entier; // Ajoute l'entier à la somme
    }

    // Calcule la moyenne en divisant la somme par 5
    double moyenne = static_cast<double>(somme) / 5;

    // Affiche la moyenne
    cout << "La moyenne des cinq entiers est : " << moyenne << endl;

    return 0;
}
