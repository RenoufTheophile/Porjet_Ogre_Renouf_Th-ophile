//
// Created by renouf on 03/11/2018.
//
#include "foret.h"

void afficherForet(Foret foret) {
    int x, y;
    system("CLS");
    for(y=0; y < FORET_HAUTEUR; y++){
        for(x=0; x < FORET_LONGUEUR; x++){
            printf("%c", foret[y][x]);
        }
        printf("\n");
    }
}
void initialiserForet(Foret foret) {
    int x, y;
    for(y=0; y < FORET_HAUTEUR; y++) {
        for(x=0; x < FORET_LONGUEUR; x++) {
            if( (y==0) || (y==(FORET_HAUTEUR-1)) ||
                (x==0) || (x==(FORET_LONGUEUR-1)) ) {
                foret[y][x] = FORET_ARBRE;
            } else {
                foret[y][x] = FORET_SOL;
            }
        }
    }
}
