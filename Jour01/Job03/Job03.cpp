#include <iostream>

int main() {
    int N;

    // Demander à l'utilisateur d'entrer la valeur de N
    std::cout << "Entrez la valeur de N : ";
    std::cin >> N;

    // Vérifier si N est positif
    if (N > 0) {
        // Afficher "Hello World" N fois
        for (int i = 0; i < N; ++i) {
            std::cout << "Hello World" << std::endl;
        }
    } else {
        std::cout << "N doit être un entier positif." << std::endl;
    }

    return 0;
}
