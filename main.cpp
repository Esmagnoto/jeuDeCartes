#include <iostream>
#include "Paquet.h"
#include "Joueur.h"
#include "Talon.h"
using namespace std;



int main() {
    Paquet paquet{};
    Talon talon{};
    Talon exposee{};
    Joueurs joueurs{};

    initialiserpaquet(paquet);
    initialiserjoeurs(joueurs);
    initialiser(talon,51);
    initialiser(exposee, 51);


    char input[10];
    while(1){

        cout <<"(Commandes valides : TEPRC)" << endl;
        cout <<"* Joueur "<<joueurs.joueur->nbOrdre <<" ("<<exposee.sommet<<") "<< "Cartes du joueur" << endl;
        cin >> input ;

        distribuercartes(paquet, talon, exposee, joueurs);
        return 0;
    }



    detruirej(joueurs);
    detruiret(talon);
    detruiret(exposee);
    return 0;
}