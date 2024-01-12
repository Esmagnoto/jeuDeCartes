/**
 * @author EESMAGNOTO CAIO
 * @version 050124
 * @file Joueur.cpp
 * @brief Entete du composant  type joueur
 **/
#include "Joueur.h"
using namespace std;



void initialiserjoeurs(Joueurs& j, int nbJoueurs) {
    j.joueur = new Joueur[nbJoueurs];
    for (int i = 0; i < nbJoueurs; ++i) {
        j.joueur[i].nbOrdre = i+1;
    }
}

void detruirej(Joueurs& j) {
    delete[] j.joueur;
    j.joueur = nullptr;
}



