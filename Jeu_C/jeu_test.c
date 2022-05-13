#include <stdlib.h>
#include <stdio.h>
#include "jeu.h"
#include "meteore.h"
#include "soldat.h"
#include "creationPlateau.h"

void test_afficher_param(int pl[L][L], soldat_t sol, meteore_t met){
    afficher(pl,sol,met);
}

void test_afficher(){
  int plateau1[L][L];
  soldat_t soldat1;
  soldat1.x=0;
  soldat1.y=0;
  meteore_t  met1;
  met1.x = 2;
  met1.y = 2;
  test_afficher_param(plateau1,soldat1, met1);
}

int main(int argc, char * argv[]){
test_afficher();

return EXIT_SUCCESS;
}
