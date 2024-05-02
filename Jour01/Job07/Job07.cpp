#include <iostream>

using namespace std;

int main() {
    int nombre;

    // Demande à l'utilisateur d'entrer un nombre entier
    cout << "Entrez un nombre entier : ";
    cin >> nombre;

    // Vérifie si le nombre est pair ou impair
    if (nombre % 2 == 0) {
        cout << nombre << " est un nombre pair." << endl;
    } else {
        cout << nombre << " est un nombre impair." << endl;
    }

    return 0;
}
