#include <iostream>
#include "Paquet.h"
using namespace std;



int main() {
    Paquet paquet{};
    cout << "paquet.cartes avant initialiser" << " " << paquet.cartes << endl;
    initialiserpaquet(paquet);
    cout << "paquet.cartes apres initialiser" << endl;
    for(int i = 0;i < 26 ;i++){
        cout << paquet.cartes[i].lettre << " "
             << paquet.cartes[i].quantite << " " << paquet.cartes[i].points << endl;
    }
    return 0;
}
