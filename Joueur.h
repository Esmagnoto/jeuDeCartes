/**
 * @author EESMAGNOTO CAIO
 * @version 050124
 * @file Joueur.h
 * @brief Entete du composant  type joueur
 **/

#ifndef JEUDECARTES_JOUEUR_H
#define JEUDECARTES_JOUEUR_H
#include "Carte.h"
#include <iostream>
#include <cassert>

/**
  * @brief Nom pour remplacer les nombres magiques
  */

/**
 * @brief Struct de données de type Joueur
 **/
struct Joueur {
    Carte cartesMain[10];
    int nbOrdre;
};

struct Joueurs {
    Joueur* joueur;
};


void initialiserjoeurs(Joueurs& j,int nbJoueurs);

void detruirej(Joueurs& j);



#endif //JEUDECARTES_JOUEUR_H