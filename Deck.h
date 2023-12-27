/**
 * @author ESMAGNOTO CAIO
 * @version 16122023
 **/
#ifndef JEUDECARTES_DECK_H
#define JEUDECARTES_DECK_H

#include "Carte.h"

struct Paquet{
    unsigned int taille; // Combien des cartes dans le deck = 52
    int sommet; // Index de la prochaine carte a etre distribuee
    int cartesRestantes; // Nombre de carte restents a distribuer
    Carte* cartes;
};

/**
 * @brief Initialiser un paquet des cartes vide
 * le paquet est allouée en mémoire dynamique
 * @see detruire, pour désallocation en fin d'utilisation
 * @param[out] p: le paquet à initialiser
 * @paral[in] taille: capacité du paquet( nombre maximum de cartes stockés)
 * @pre taille superior a 0
 */
void initialiserpaquet(Paquet& p, unsigned int taille);

/**
 * @brief Fonction pour aditioner les cartes
 * @param
 */
void aditionercartes(Paquet* p, unsigned int taille);

void melanger();

/**
 * @brief Désallouer un paquet
 * @see initialiser, un paquet à déjà été initialisée
 * @param [in, out] p: le paquet à désallouer
 */
void detruire(Paquet& p);

void distribuerCartes();

#endif //JEUDECARTES_DECK_H
