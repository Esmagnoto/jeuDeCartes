/**
 * @author EESMAGNOTO CAIO
 * @version 050124
 * @file joueur.h
 * @brief Entete du composant  type joueur
 **/
#include "Joueur.h"
#include <iostream>
#include <cassert>


void initialiserjoeurs(Joueurs& j) {
    j.joueur = new Joueur;
    j.joueur -> nbOrdre = 0;
}

void detruirej(Joueurs& j) {
    delete[] j.joueur;
    j.joueur = nullptr;
}