#include <iostream>

using namespace std;

int main() {
    // Déclaration des variables
    int n, m, temp;

    // Demande à l'utilisateur de saisir les deux entiers
    cout << "Entrez la valeur de n : ";
    cin >> n;

    cout << "Entrez la valeur de m : ";
    cin >> m;

    // Affiche les valeurs initiales de n et m
    cout << "Avant l'echange, n = " << n << " et m = " << m << endl;

    // Échange des valeurs de n et m en utilisant une variable temporaire
    temp = n;
    n = m;
    m = temp;

    // Affiche les valeurs après l'échange
    cout << "Après l'echange, n = " << n << " et m = " << m << endl;

    return 0;
}
