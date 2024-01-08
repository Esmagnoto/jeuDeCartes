/**
 * @author ESMAGNOTO CAIO
 * @version 271223
 * @file Paquet.cpp
 * @brief Corps du composant d'un paquet de cartes
 **/

#include <iostream>
#include <cstdlib>
#include <cassert>
#include <ctime>
#include <thread>
#include <chrono>
#include "Paquet.h"
#include "Joueur.h"
#include "Talon.h"
using namespace std;

/**
 * @brief Initialiser le paquet avec 52 cartes
 * @param[in] p: Le paquet a etre initialisé
 */
void initialiserpaquet(Paquet& p) {
    //unsigned int indices[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
    unsigned int quantite[] = { 2, 2, 2, 2, 5, 1, 2, 2, 4, 1, 1, 2, 1, 3, 2, 1, 1, 3, 3, 3, 3, 1, 1, 1, 1, 1 };
    unsigned int points[] = { 10, 2, 8, 6, 10, 2, 4, 8, 10, 6, 8, 8, 8, 8, 8, 8, 4, 8, 8, 8, 8, 8, 8, 2, 4, 2 };
    char lettre = 'A';
    unsigned int indice = 0;

    for (unsigned int i = 0; i < MAX_CARTES;) { //sizeof(indices)/sizeof(indices[0])
        for (unsigned int k = 1; k <= quantite[indice]; k++) { //para cada quantidade[i]
            p.cartes[i].numeroCarte = k;
            p.cartes[i].points = points[indice];
            p.cartes[i].lettre = lettre;
            i++;
        }
        lettre++;
        indice++;
    }
}


/**
 * @brief Melanger les cartes du paquet
 * @param[in] p: le paquet de cartes a mélanger
 * @pre le paquet ne doit pas etre vide
 */
void melanger(Paquet& p) {
    assert(p.cartes[0].numeroCarte != 0);
    srand(time(NULL));
    for (int i = 0; i < MAX_CARTES; i++) {
        int j = rand() % 51;
        Carte tmp = p.cartes[i];
        p.cartes[i] = p.cartes[j];
        p.cartes[j] = tmp;
    }
}

/**
 * @brief Distribuer les cartes, cette fonction vas distribuer les cartes entre les joeurs
 * à la fin les cartes restantes doivent aller au talon face caché
 * @param[in] p: le paquet de cartes à distribuer
 * @pre le paquet ne doit pas etre vide assert(p.cartes[0].quantite != 0);
 */
void distribuercartes(Paquet& p, Talon& t, Joueurs& j) {
    for (int i = 0; i < sizeof(j.joueur)/sizeof(j.joueur[0]); i++) { // Pour chaque joueur
        assert(p.cartes[0].numeroCarte != 0);
        for (int c = 0; c < CARTES_M; c++) {
            j.joueur[i].cartesMain[c] = sommet(t);
            depiler(t);
        }
    }
}