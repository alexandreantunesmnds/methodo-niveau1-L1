/**
* \file creationPlateau.c
* \author Alexandre ANTUNES & Baptiste COLLINOT
* \brief fichier .c définnissant les fonctions du fichier .h
* \date 2021-03-08
* \b group: D1
*/
#include <stdio.h>
#include <stdlib.h>
#include "outils.h"
#include <time.h>//Pour la fonction srand
//Choisit aléatoirement un entier entre un intervalle a et b donné
int randint(int a, int b){
    if (a >= b){
        return a;
    }
    else{
    return rand()%(b-a) + a;
    }
}
