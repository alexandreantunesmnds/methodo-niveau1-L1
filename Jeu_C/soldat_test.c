#include <stdlib.h>
#include <stdio.h>
#include "soldat.h"

void test_deplacer_param(soldat_t* sol, int pl[L][L]){
    deplacer(sol, pl);
}

void test_deplacer(){
soldat_t sol1;
sol1.x=0;
sol1.y=0;
int plateau1[L][L];
test_deplacer_param(&sol1,plateau1);
}

int main(int argc, char * argv[]){
test_deplacer();

return EXIT_SUCCESS;
}
