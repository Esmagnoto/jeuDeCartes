#include <iostream>
#include "Paquet.h"
#include "Joueur.h"
#include "Talon.h"
using namespace std;



int main() {
    Paquet paquet{};
    Talon talon{};
    Joueurs joueurs{};
    cout << "paquet.cartes avant initialiser" << " " << paquet.cartes << endl;
    initialiserpaquet(paquet);
    initialiserjoeurs(joueurs);
    initialiser(talon,51);
    cout << "paquet.cartes apres initialiser" << endl;
    for (int i = 0; i < MAX_CARTES; i++) {
        cout << paquet.cartes[i].lettre << " "
             << " " << paquet.cartes[i].points << endl;
    }
    melanger(paquet);
    cout << "----------------------------------------------------------------------------------------------" << endl;
    for (int i = 0; i < MAX_CARTES; i++) {
        cout << paquet.cartes[i].lettre << " "
             << " " << paquet.cartes[i].points << endl;
    }
    detruirej(joueurs);
    detruiret(talon);
    return 0;
}