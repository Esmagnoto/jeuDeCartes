/**
 * @author Caio and Jules
 * @version 16122023
 **/

#ifndef JEUDECARTES_DECK_H
#define JEUDECARTES_DECK_H

<<<<<<< HEAD
#include "Carte.h"
=======
>>>>>>> origin/jeuDeCartes


struct Deck{
    int taille; // Combien des cartes dans le deck = 52
    int nextCarte; // Index de la prochaine carte a etre distribuee
    int carteLeft; // Nombre de carte restents a distribuer
    Carte* cartes;
};

/**
 * @brief Initialiser le Deck des cartes,
 * @param[in,out] deck : la pile
 * @param[in] :
 * @pre pre condition;
 */
void initialiser();

void melanger();

void distribuerCartes();



<<<<<<< HEAD
=======






>>>>>>> origin/jeuDeCartes
#endif //JEUDECARTES_DECK_H
