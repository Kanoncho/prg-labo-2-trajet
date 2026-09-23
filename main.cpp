#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

//  Bonus, L1 aléatoire
int distanceRocheux(double L1) {
    double temps_route = L1 / 5.0;

    double distance_rocheux = sqrt(pow(3.0, 2.0) + pow(abs(10 - L1),2.0));

    cout << "Le distance rocheux le plus optimale: " << distance_rocheux << "km" << endl;

    double temps_rocheux = distance_rocheux / 2;
    double temps_totale = temps_rocheux + temps_route;

    cout << "Le temps totale: " << temps_totale << "h"  << endl;

    return EXIT_SUCCESS;
}

// Pour calculer le temps avec L1 prédéfini
int main() {
    double temps_route = 6.0 / 5.0;
    double distance_rocheux = sqrt(pow(3.0, 2.0) + pow(10 - 6,2.0));
    double temps_rocheux = distance_rocheux / 2.0;
    double temps_totale = temps_rocheux + temps_route;

    cout << "Le temps totale: " << temps_totale << "h" << endl;

    return EXIT_SUCCESS;
}

