/**
 * @author EESMAGNOTO CAIO
 * @version 050124
 * @file joueur.h
 * @brief Entete du composant  type joueur
 **/

#ifndef JEUDECARTES_JOUEUR_H
#define JEUDECARTES_JOUEUR_H
#include "Carte.h"

/**
  * @brief Nom pour remplacer les nombres magiques
  */


/**
 * @brief Struct de données de type Joueur
 **/
struct Joueur {
    Carte cartesMain[10];
};

struct Joueurs {
    Joueur* joueur;
};


void initialiserjoeurs(Joueurs& j);

void detruirej(Joueurs& j);

#endif //JEUDECARTES_JOUEUR_H
