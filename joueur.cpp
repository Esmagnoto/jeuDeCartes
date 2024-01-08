//
// Created by caio on 05/01/2024.
//

#include "Joueur.h"
#include <iostream>
#include <cassert>


void initialiserjoeurs(Joueurs& j) {
    j.joueur = new Joueur;
}

void detruirej(Joueurs& j) {
    delete[] j.joueur;
    j.joueur = nullptr;
}