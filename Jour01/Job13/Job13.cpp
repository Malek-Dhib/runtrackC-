#include <iostream>

using namespace std;

int main() {
    int N;
    long long somme = 0; // Utilisation de long long pour stocker la somme, car elle peut devenir grande

    // Demande à l'utilisateur de saisir un entier N
    cout << "Entrez un entier N : ";
    cin >> N;

    // Calcule la somme des cubes de 5^3 à N^3
    for (int i = 5; i <= N; ++i) {
        somme += i * i * i;
    }

    // Affiche la somme des cubes
    cout << "La somme des cubes de 5^3 a " << N << "^3 est : " << somme << endl;

    return 0;
}
