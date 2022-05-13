#include <stdlib.h>
#include <stdio.h>
#include <time.h>//Pour la fonction srand
#include "creationPlateau.h"

void test_newPlateau_param(int plateau[L][L], int nb_murs){
    newPlateau(plateau,nb_murs);
}

void test_newPlateau(){
int plateau1[L][L];
int nb_murs1= 8;
test_newPlateau_param(plateau1,nb_murs1);
}

int main(int argc, char * argv[]){
test_newPlateau();

return EXIT_SUCCESS;
}
