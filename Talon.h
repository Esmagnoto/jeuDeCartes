/**
 * @author ESMAGNOTO CAIO
 * @version 271223
 * @file Talon.h
 * @brief Composant d'un talon de cartes
 **/
#ifndef JEUDECARTES_TALON_H
#define JEUDECARTES_TALON_H
#include "Carte.h"

/**
 * @brief Struct d'un Talon
 */
struct Talon{
    unsigned short capacite; //Capacite du talon (capacité > 0)
    Carte* tab; // tableau des éléments de Talon en mémoire dynamique
    int sommet; // indice de sommet du talon dnas tab
};

/**
 * @brief Initialiser un talon vide
 * le talon est allouée en mémoire dynamique
 * @see detruire, pour une désallocation en fin d'utilisation
 * @param[out] t: le talon à initialiser
 * @param[in] c: capacité du talon (nb maximum d'items stockés)
 * @pre c>0
 **/
void initialiser(Talon& t, unsigned int c);

/**
 * @brief Désallouer un talon
 * @see initialiser, le talon a déjà été initialisée
 * @param[in, out] t: le talon à désallouer
 */
void detruire(Talon& t);

/**
* @brief Savoir se le talon est plein
* @param[in] t: le talon testé
* @return true si t est plein, false sinon
*/
bool estPleine(const Talon& t);

/**
* @brief Savoir se le talon est vide
* @param[in] t: le talon testé
* @return true si t est vide, false sinon
*/
bool estVide(const Talon& t);

/**
 * @brief Lire la carte au sommet de pile
 * @param[in] t: le talon
 * @return la valeur de la carte au sommet du talon
 * @pre le talon n'est pas vide
 */
Carte sommet(const Talon& t);

/**
* @brief Empiler une carte sur le talon
* @param[in, out] t: le talon
* @param[in] it la carte a empiler
* @pre t n'est pas plein
*/
void empiler(Talon& t, const Carte& it);

/**
* @brief Dépiler la carte au sommet du talon
* @param[in, out] t: le talon
* @pre t n'est pas vide
*/
void depiler(Talon& t);


#endif //JEUDECARTES_TALON_H
