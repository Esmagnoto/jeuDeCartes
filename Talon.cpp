/**
 * @author ESMAGNOTO CAIO
 * @version 271223
 * @file Talon.cpp
 * @brief Corps du composant d'un Talon de cartes
 **/
#include "Talon.h"
#include <iostream>
#include <cassert>
using namespace std;

/**
 * @brief Initialiser un talon vide
 * le talon est allouée en mémoire dynamique
 * @see detruire, pour une désallocation en fin d'utilisation
 * @param[out] t: le talon à initialiser
 * @param[in] c: capacité du talon (nb maximum d'items stockés)
 * @pre c>0
 **/
void initialiser(Talon& t, unsigned int c){
    assert(c>0);
    t.capacite = c;
    t.tab = new Carte[c];
    t.sommet = -1;
}

/**
 * @brief Désallouer un talon
 * @see initialiser, le talon a déjà été initialisée
 * @param[in, out] t: le talon à désallouer
 */
void detruire(Talon& t){
    delete [] t.tab;
    t.tab = nullptr;
}

/**
* @brief Savoir se le talon est plein
* @param[in] t: le talon testé
* @return true si t est plein, false sinon
*/
bool estPleine(const Talon& t){
    return(t.sommet == (t.capacite-1));
}

/**
* @brief Savoir se le talon est vide
* @param[in] t: le talon testé
* @return true si t est vide, false sinon
*/
bool estVide(const Talon& t){
    return(t.sommet == -1);
}

/**
 * @brief Lire la carte au sommet de pile
 * @param[in] t: le talon
 * @return la valeur de la carte au sommet du talon
 * @pre le talon n'est pas vide
 */
Carte sommet(const Talon& t){
    assert(!estVide(t));
    return t.tab[t.sommet];
}

/**
* @brief Empiler une carte sur le talon
* @param[in, out] t: le talon
* @param[in] it la carte a empiler
* @pre t n'est pas plein
*/
void empiler(Talon& t, const Carte& it){
    assert(!estPleine(t));
    t.sommet++;
    t.tab[t.sommet] = it;
}

/**
* @brief Dépiler la carte au sommet du talon
* @param[in, out] t: le talon
* @pre t n'est pas vide
*/
void depiler(Talon& t){
    assert(!estVide(t));
    t.sommet--;
}