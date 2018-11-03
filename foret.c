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
    for(y=0; y < FORET_HAUTEUR; y++){
        for(x=0; x < FORET_LONGUEUR; x++){
            foret[y][x] = FORET_SOL;
        }
    }
}
