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
    initialiser(talon,51);
    initialiser(exposee, 51);
    int nbJoeurs;
    cout <<"Combien de joeurs ?" << endl;
    cin >> nbJoeurs;
    initialiserjoeurs(joueurs,nbJoeurs);
    distribuercartes(paquet, talon, exposee, joueurs);


    while(1){
        cout <<"(Commandes valides : TEPRC)" << endl;
        affichersituation(joueurs,exposee);


        return 0;
    }



    detruirej(joueurs);
    detruiret(talon);
    detruiret(exposee);
    return 0;
}