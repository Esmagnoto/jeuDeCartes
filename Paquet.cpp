/**
 * @author ESMAGNOTO CAIO
 * @version 271223
 * @file Paquet.cpp
 * @brief Corps du composant d'un paquet de cartes
 **/

#include <iostream>
#include <cstdlib>
#include <cassert>
#include "Paquet.h"
using namespace std;

/**
 * @brief Initialiser le paquet avec 52 cartes
 * @param[in] p: Le paquet a etre initialisé
 */
void initialiserpaquet(Paquet& p){
    unsigned int indices[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
    unsigned int quantite[] ={2,2,2,2,5,1,2,2,4,1,1,2,1,3,2,1,1,3,3,3,3,1,1,1,1,1};
    unsigned int points[] = {10,2,8,6,10,2,4,8,10,6,8,8,8,8,8,8,4,8,8,8,8,8,8,2,4,2};
    char lettre ='A';
    for(unsigned int i =0; i < sizeof(indices)/sizeof(indices[0]);i++){
        p.cartes[i].quantite = quantite[i];
        p.cartes[i].points = points[i];
        p.cartes[i].lettre = lettre;
        lettre++;
    }
}

/**
 * @brief Melanger les cartes du paquet
 * @param[in] p: le paquet de cartes a mélanger
 * @pre le paquet ne doit pas etre vide
 */
void melanger(Paquet& p){
    assert(p.cartes[0].quantite != 0);
    for (int i = 0; i < MAX_CARTES; ++i) {
        int j = rand()
        p.cartes[i] = p.cartes[j]
    }
}
