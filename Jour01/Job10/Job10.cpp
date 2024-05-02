#include <iostream>

using namespace std;

int main() {
    // Déclaration des variables
    double prixHTKiloCarottes, nombreKilos, tauxTVA;

    // Demande à l'utilisateur de saisir les données
    cout << "Entrez le prix HT d'un kilo de carottes : ";
    cin >> prixHTKiloCarottes;

    cout << "Entrez le nombre de kilos de carottes : ";
    cin >> nombreKilos;

    cout << "Entrez le taux de TVA en pourcentage (ex: 15 pour 15%) : ";
    cin >> tauxTVA;

    // Calcul du prix TTC
    double prixTTC = prixHTKiloCarottes * nombreKilos * (1 + tauxTVA / 100.0);

    // Affichage du prix TTC
    cout << "Le prix TTC pour " << nombreKilos << " kilos de carottes est : " << prixTTC << " euros." << endl;

    return 0;
}
