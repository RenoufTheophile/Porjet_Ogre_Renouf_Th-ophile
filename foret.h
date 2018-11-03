//
// Created by renouf on 03/11/2018.
//
#include <stdio.h>
#include <stdlib.h>

#ifndef FORET_H_INCLUDED
#define FORET_H_INCLUDED

#define FORET_LONGUEUR 40
#define FORET_HAUTEUR 20
#define FORET_SOL ' '
#define FORET_ARBRE 5


typedef char Foret[FORET_HAUTEUR][FORET_LONGUEUR];

void afficherForet(Foret foret);
void initialiserForet(Foret foret);


#endif //FORET_H_INCLUDED
