#include "Releve2Notes.h"


int main() {
    Releve2Notes etudiants[10];

    for (int i = 0; i < 10; ++i) {
        etudiants[i].saisie();
    }

    for (int i = 0; i < 10; ++i) {
        etudiants[i].affichage();
    }
}
