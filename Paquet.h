/**
 * @author ESMAGNOTO CAIO
 * @version 271223
 * @file Paquet.h
 * @brief Composant d'un paquet de cartes
 **/

#ifndef JEUDECARTES_PAQUET_H
#define JEUDECARTES_PAQUET_H

#include "Carte.h"
/**
 * @brief Nom pour remplacer les nombres magiques nb des cartes
 */
enum{MAX_CARTES=51};

/**
 * @brief Struct d'un paquet de cartes
 */
struct Paquet{
    Carte cartes[MAX_CARTES];
};

/**
 * @brief Initialiser le paquet avec 52 cartes
 * @param[in] p: Le paquet a etre initialisé
 */
void initialiserpaquet(Paquet& p);

/**
 * @brief Melanger les cartes du paquet
 * @param[in] p: le paquet de cartes a mélanger
 * @pre le paquet ne doit pas etre vide assert(p.cartes[0].quantite != 0);
 */
void melanger(Paquet& p);

/**
 * @brief Distribuer les cartes, cette fonction vas distribuer les cartes entre les joeurs
 * à la fin les cartes restantes doivent aller au talon face caché
 * @param[in] p: le paquet de cartes à distribuer
 * @pre le paquet ne doit pas etre vide assert(p.cartes[0].quantite != 0);
 */
void distribuercartes(Paquet& p);



#endif //JEUDECARTES_PAQUET_H
