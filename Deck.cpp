/**
 * @file Deck.cpp
 * @brief Corps du composant d'un paquet des cartes
 */

#include <iostream>
#include <cassert>
#include "Deck.h"
using namespace std;

/**
 * @brief Initialiser un paquet des cartes vide
 * le paquet est allouée en mémoire dynamique
 * @see detruire, pour désallocation en fin d'utilisation
 * @param[out] p: le paquet à initialiser
 * @paral[in] taille: capacité du paquet( nombre maximum de cartes stockés)
 * @pre taille superior a 0
 */
void initialiserpaquet(Paquet& p, unsigned int taille){
    assert(taille>0);
    p.taille = taille;
    p.cartes =new Carte[taille];
    p.sommet = -1;
}

/**
 * @brief Fonction pour aditioner les cartes
 */
void aditionercartes(Paquet* p, unsigned int taille){
    unsigned int indices[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
    unsigned int quantite[] ={2,2,2,2,5,1,2,2,4,1,1,2,1,3,2,1,1,3,3,3,3,1,1,1,1,1};
    unsigned int points[] = {10,2,8,6,10,2,4,8,10,6,8,8,8,8,8,8,4,8,8,8,8,8,8,2,4,2};
    char lettre ='A';
    for(unsigned int i =0; i < sizeof(indices)/sizeof(indices[0]);i++){
        p->cartes[i].quantite = quantite[i];
        p->cartes[i].points = points[i];
        p->cartes[i].lettre = lettre;
        lettre++;
    }
}

/**
 * @brief Désallouer un paquet
 * @see initialiser, un paquet à déjà été initialisée
 * @param [in, out] p: le paquet à désallouer
 */
void detruire(Paquet& p){
     delete [] p.cartes;
     p.cartes = nullptr;
 }

